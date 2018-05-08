
import io
import json 
from lib import node
from lib.generator import convert_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    data["code"] != data["lower"] and nd.extend(data["code"], data["lower"])
    ## nd.extend(data["code"], data["lower"])
    ## nd.extend(data["upper"], data["lower"])
    ## nd.extend(data["fold"], data["lower"])
    ## nd.extend(data["title"], data["lower"])

  with open("dist/downcase_unicos_manually_in.c", "w") as stream:
    convert_function.write("downcase_unicos_manually_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
