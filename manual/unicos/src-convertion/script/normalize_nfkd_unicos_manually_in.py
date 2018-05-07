
import io
import json 
from lib import node
from lib.generator import convert_function

try:	

	with open("json/unicode-normalization.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		data["code"] != data["kd"] and nd.extend(data["code"], data["kd"])
		## nd.extend(data["code"], data["kd"])
		## nd.extend(data["c"], data["kd"])
		## nd.extend(data["d"], data["kd"])
		## nd.extend(data["kc"], data["kd"])

	with open("dist/normalize_nfkd_unicos_manually_in.c", "w") as stream:
		convert_function.write("normalize_nfkd_unicos_manually_in", nd, stream)
		
except KeyboardInterrupt:
	
	pass
