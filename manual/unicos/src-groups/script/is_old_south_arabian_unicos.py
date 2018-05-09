
import json
from lib import node 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/old_south_arabian.json", "r") as stream:
  data = json.load(stream)

nd = node.RootNode()

for dat in data:
  nd.extend(dat, True)

with open("dist/is_old_south_arabian_unicos.h", "w") as stream:
  predicate_function_declaration.write("is_old_south_arabian_unicos", stream)

with open("dist/is_old_south_arabian_unicos.c", "w") as stream:
  predicate_function.write("is_old_south_arabian_unicos", nd, stream)
