
import io
import json 
from lib import node
from lib.generator import convert_function

try:	

	with open("json/unicode-case.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		data["code"] != data["fold"] and nd.extend(data["code"], data["fold"])
		## nd.extend(data["code"], data["fold"])
		## nd.extend(data["upper"], data["fold"])
		## nd.extend(data["lower"], data["fold"])
		## nd.extend(data["title"], data["fold"])

	with open("dist/foldcase_unicos_manually_in.c", "w") as stream:
		convert_function.write("foldcase_unicos_manually_in", nd, stream)
		
except KeyboardInterrupt:
	
	pass
	