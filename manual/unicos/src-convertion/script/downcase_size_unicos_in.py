
import io
import json 
from lib import node
from lib.generator import size_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    nd.extend(data["code"], data["lower"])
    ## nd.extend(data["upper"], data["lower"])
    ## nd.extend(data["fold"], data["lower"])
    ## nd.extend(data["title"], data["lower"])

  with open("dist/downcase_size_unicos_in.c", "w") as stream:
    size_function.write("downcase_size_unicos_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
