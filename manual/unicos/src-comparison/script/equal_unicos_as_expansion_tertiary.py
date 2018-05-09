
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
  for da in dat["et"]:
    ndb.extend(da, True)

with open("dist/equal_unicos_as_expansion_tertiary.c", "w") as stream:
  compare_function.write("equal_unicos_as_expansion_tertiary", nda, stream)
