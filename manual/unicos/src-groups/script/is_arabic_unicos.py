
import json
from lib import node 
from lib.generator import predicate_function
from lib.generator import predicate_function_declaration

with open("json/arabic.json", "r") as stream:
  data = json.load(stream)

nd = node.RootNode()

for dat in data:
  nd.extend(dat, True)

with open("dist/is_arabic_unicos.h", "w") as stream:
  predicate_function_declaration.write("is_arabic_unicos", stream)

with open("dist/is_arabic_unicos.c", "w") as stream:
  predicate_function.write("is_arabic_unicos", nd, stream)
