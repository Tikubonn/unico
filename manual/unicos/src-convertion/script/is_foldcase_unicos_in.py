
import io
import json 
from lib import node
from lib.generator import predicate_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    nd.extend(data["fold"], True)

  with open("dist/is_foldcase_unicos_in.c", "w") as stream:
    predicate_function.write("is_foldcase_unicos_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
