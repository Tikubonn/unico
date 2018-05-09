
import os 
import re
import json 
from lib.generator import include 
from lib.generator import makefile 

def fname2name (fname):
  
  matched = re.match("(.*)\.json$", fname)
  
  if not matched:
    raise Exception("invalid file name.")
  
  name, = matched.groups()
  return name 

make_src = makefile.makefile()
make_script = makefile.makefile()
include_src = include.include()

make_src.add_command("make -C script")

recipe_src_clean = makefile.recipe("clean")
make_src.add_independ_recipe(recipe_src_clean)

recipe_src_lib = makefile.recipe("groups.lib")
recipe_src_lib_ar = makefile.command("ar", ("r", "groups.lib"))
recipe_src_lib.add_command(recipe_src_lib_ar)
make_src.add_recipe(recipe_src_lib)

with open("template/template.py", "r") as streamin:
  template = streamin.read()

for fname in os.listdir("json"):
  
  name = fname2name(fname)
  
  ## script/makefile
  
  recipe = makefile.recipe(
    "dist/is_%s_unicos.c" % (name,),
    ("is_%s_unicos.py" % (name,),
     "lib/node.py",
     "lib/generator/predicate_function.py",
     "lib/generator/predicate_function_declaration.py",),
    ("$(PYTHON) is_%s_unicos.py" % (name,),))
  
  make_script.add_recipe(recipe)
  
  ## src/makefile_update
  
  recipe = makefile.recipe(
    "is_%s_unicos.c" % (name,),
    ("script/dist/is_%s_unicos.c" % (name,),),
    ("cp script/dist/is_%s_unicos.c is_%s_unicos.c" % (name, name,),))
  
  make_src.add_independ_recipe(recipe)
  
  recipe = makefile.recipe(
    "is_%s_unicos.h" % (name,),
    ("script/dist/is_%s_unicos.h" % (name,),),
    ("cp script/dist/is_%s_unicos.h is_%s_unicos.h" % (name, name,),))
  
  make_src.add_independ_recipe(recipe)
  
  ## src/makefile 
  
  recipe = makefile.recipe(
    "compiled/is_%s_unicos.o" % (name,),
    ("is_%s_unicos.c" % (name,),),
    ("$(CC) $(CFLAGS) -c is_%s_unicos.c -o compiled/is_%s_unicos.o" % (name, name,),))

  make_src.add_independ_recipe(recipe)
  
  recipe_src_clean.add_command("rm -f compiled/is_%s_unicos.o" % (name,))
  recipe_src_lib.add_depend("compiled/is_%s_unicos.o" % (name,))
  recipe_src_lib_ar.add_argument("compiled/is_%s_unicos.o" % (name,))
  
  ## src/all.h
  
  depend = include.relative("is_%s_unicos.h" % (name,))
  include_src.append(depend)
  
  with open("is_%s_unicos.py" % (name,), "w") as stream:
    stream.write(template.format(name = name))

with open("makefile", "w") as stream:
  make_script.write(stream)

with open("../makefile", "w") as stream:
  make_src.write(stream)

with open("../all.h", "w") as stream:
  include_src.write(stream)
