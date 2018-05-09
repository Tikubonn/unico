
import json
from lib import node 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/cuneiform.json", "r") as stream:
  data = json.load(stream)

nd = node.RootNode()

for dat in data:
  nd.extend(dat, True)

with open("dist/is_cuneiform_unicos.h", "w") as stream:
  predicate_function_declaration.write("is_cuneiform_unicos", stream)

with open("dist/is_cuneiform_unicos.c", "w") as stream:
  predicate_function.write("is_cuneiform_unicos", nd, stream)
