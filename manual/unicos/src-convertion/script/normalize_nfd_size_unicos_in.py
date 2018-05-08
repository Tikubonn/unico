import io
import json 
from lib import node
from lib.generator import size_function

try:  

  with open("json/unicode-normalization.json", "r") as stream:
    datas = json.load(stream)

  nd = node.RootNode()

  for data in datas:
    nd.extend(data["code"], data["d"])
    nd.extend(data["c"], data["d"])
    nd.extend(data["kc"], data["d"])
    nd.extend(data["kd"], data["d"])

  with open("dist/normalize_nfd_size_unicos_in.c", "w") as stream:
    size_function.write("normalize_nfd_size_unicos_in", nd, stream)
    
except KeyboardInterrupt:
  
  pass
