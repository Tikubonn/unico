
import io
import json 
from lib import node
from lib.generator import convert_function

try:  

  with open("json/unicode-case.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    data["code"] != data["upper"] and nd.extend(data["code"], data["upper"])
    ## nd.extend(data["code"], data["upper"])
    ## nd.extend(data["lower"], data["upper"])
    ## nd.extend(data["fold"], data["upper"])
    ## nd.extend(data["title"], data["upper"])

  with open("dist/upcase_unicos_manually_in.c", "w") as stream:
    convert_function.write("upcase_unicos_manually_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
