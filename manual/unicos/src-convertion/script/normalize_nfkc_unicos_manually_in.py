
import io
import json 
from lib import node
from lib.generator import convert_function

try:  

  with open("json/unicode-normalization.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    data["code"] != data["kc"] and nd.extend(data["code"], data["kc"])
    ## nd.extend(data["code"], data["kc"])
    ## nd.extend(data["c"], data["kc"])
    ## nd.extend(data["d"], data["kc"])
    ## nd.extend(data["kd"], data["kc"])

  with open("dist/normalize_nfkc_unicos_manually_in.c", "w") as stream:
    convert_function.write("normalize_nfkc_unicos_manually_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
