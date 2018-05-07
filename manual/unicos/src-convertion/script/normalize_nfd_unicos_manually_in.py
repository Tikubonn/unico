
import io
import json 
from lib import node
from lib.generator import convert_function

try:	

	with open("json/unicode-normalization.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		data["code"] != data["d"] and nd.extend(data["code"], data["d"])
		## nd.extend(data["code"], data["d"])
		## nd.extend(data["c"], data["d"])
		## nd.extend(data["kc"], data["d"])
		## nd.extend(data["kd"], data["d"])

	with open("dist/normalize_nfd_unicos_manually_in.c", "w") as stream:
		convert_function.write("normalize_nfd_unicos_manually_in", nd, stream)
		
except KeyboardInterrupt:
	
	pass
