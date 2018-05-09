
import json
from lib import node 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/{name}.json", "r") as stream:
  data = json.load(stream)

nd = node.RootNode()

for dat in data:
  nd.extend(dat, True)

with open("dist/is_{name}_unicos.h", "w") as stream:
  predicate_function_declaration.write("is_{name}_unicos", stream)

with open("dist/is_{name}_unicos.c", "w") as stream:
  predicate_function.write("is_{name}_unicos", nd, stream)
