
import io
import json 
from lib import node
from lib.generator import convert_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    data["code"] != data["title"] and nd.extend(data["code"], data["title"])
    ## nd.extend(data["code"], data["title"])
    ## nd.extend(data["upper"], data["title"])
    ## nd.extend(data["lower"], data["title"])
    ## nd.extend(data["fold"], data["title"])

  with open("dist/title_unicos_manually_in.c", "w") as stream:
    convert_function.write("title_unicos_manually_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
