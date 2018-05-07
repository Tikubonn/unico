
import io
import json 
from lib import node
from lib.generator import convert_function

try:	

	with open("json/unicode-normalization.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		data["code"] != data["c"] and nd.extend(data["code"], data["c"])
		## nd.extend(data["code"], data["c"])
		## nd.extend(data["d"], data["c"])
		## nd.extend(data["kc"], data["c"])
		## nd.extend(data["kd"], data["c"])

	with open("dist/normalize_nfc_unicos_manually_in.c", "w") as stream:
		convert_function.write("normalize_nfc_unicos_manually_in", nd, stream)
		
except KeyboardInterrupt:
	
	pass
