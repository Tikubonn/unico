
import io
import json 
from lib import node
from lib.generator import size_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    nd.extend(data["code"], data["upper"])
    ## nd.extend(data["lower"], data["upper"])
    ## nd.extend(data["fold"], data["upper"])
    ## nd.extend(data["title"], data["upper"])

  with open("dist/upcase_size_unicos_in.c", "w") as stream:
    size_function.write("upcase_size_unicos_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
