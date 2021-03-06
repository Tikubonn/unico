
import json
from lib import node
from lib.generator import compare_function 

with open("json/collation.json", "r") as stream:
  data = json.load(stream)

nda = node.RootNode()

for dat in data:
  
  ndb = node.RootNode()

  for codes in dat["t"]:
    ndb.extend(codes, True)

  nda.extend(dat["p"], ndb)

with open("dist/equal_unicos_as_tertiary.c", "w") as stream:
  compare_function.write("equal_unicos_as_tertiary", nda, stream)
