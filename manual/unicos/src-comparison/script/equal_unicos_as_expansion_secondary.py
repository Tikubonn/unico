
import json
from lib import node
from lib.generator import compare_function 

with open("json/collation.json", "r") as stream:
  data = json.load(stream)

nda = node.RootNode()
ndb = node.RootNode()

for dat in data:
  nda.extend(dat["p"], ndb)

for dat in data:
  for da in dat["es"]:
    ndb.extend(da, True)
  
with open("dist/equal_unicos_as_expansion_secondary.c", "w") as stream:
  compare_function.write("equal_unicos_as_expansion_secondary", nda, stream)