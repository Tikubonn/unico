
import io
import json 
from lib import node
from lib.generator import size_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    nd.extend(data["code"], data["title"])
    ## nd.extend(data["upper"], data["title"])
    ## nd.extend(data["lower"], data["title"])
    ## nd.extend(data["fold"], data["title"])

  with open("dist/titlecase_size_unicos_in.c", "w") as stream:
    size_function.write("titlecase_size_unicos_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
