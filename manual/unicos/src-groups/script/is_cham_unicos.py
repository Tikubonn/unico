
import json
from lib import node 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/cham.json", "r") as stream:
  data = json.load(stream)

nd = node.RootNode()

for dat in data:
  nd.extend(dat, True)

with open("dist/is_cham_unicos.h", "w") as stream:
  predicate_function_declaration.write("is_cham_unicos", stream)

with open("dist/is_cham_unicos.c", "w") as stream:
  predicate_function.write("is_cham_unicos", nd, stream)
