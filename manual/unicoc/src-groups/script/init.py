
import json
from lib.generator import include
from lib.generator import makefile 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/groups.json", "r") as stream:
  data = json.load(stream)

inc = include.include()
make = makefile.makefile()

update = makefile.recipe("update")
make.add_independ_recipe(update)

clean = makefile.recipe("clean")
clean.add_command("rm -f groups.lib")
make.add_independ_recipe(clean)

lib_command = makefile.command("ar", ("r", "groups.lib"))
lib = makefile.recipe("groups.lib", [], [lib_command])
make.add_recipe(lib)

for name in data:
  
  with open("dist/is_%s_unicoc.c" % (name,), "w") as stream:
    predicate_function.write(name, stream)
    
  with open("dist/is_%s_unicoc.h" % (name,), "w") as stream:
    predicate_function_declaration.write(name, stream)
    
  ## src/makefile
  
  recipe = makefile.recipe(
    "is_%s_unicoc.c" % (name,),
    ("script/dist/is_%s_unicoc.c" % (name,),),
    ("cp script/dist/is_%s_unicoc.c is_%s_unicoc.c" % (name, name),))
  
  make.add_independ_recipe(recipe)
  update.add_command("make is_%s_unicoc.c" % (name,))
    
  recipe = makefile.recipe(
    "is_%s_unicoc.h" % (name,),
    ("script/dist/is_%s_unicoc.h" % (name,),),
    ("cp script/dist/is_%s_unicoc.h is_%s_unicoc.h" % (name, name),))
  
  make.add_independ_recipe(recipe)
  update.add_command("make is_%s_unicoc.h" % (name,))
    
  recipe = makefile.recipe(
    "compiled/is_%s_unicoc.o" % (name,),
    ("is_%s_unicoc.c" % (name,),
     "is_%s_unicoc.h" % (name,)),
    ("$(CC) $(CFLAGS) -c is_%s_unicoc.c -o compiled/is_%s_unicoc.o" % (name, name),))
  
  make.add_independ_recipe(recipe)
  
  lib_command.add_argument("compiled/is_%s_unicoc.o" % (name,))
  lib.add_depend("compiled/is_%s_unicoc.o" % (name,))
  
  clean.add_command("rm -f compiled/is_%s_unicoc.o" % (name,))
  
  ## all.h
  
  depend = include.relative("is_%s_unicoc.h" % (name,))
  inc.append(depend)

with open("../all.h", "w") as stream:
  inc.write(stream)

with open("../makefile", "w") as stream:
  make.write(stream)
