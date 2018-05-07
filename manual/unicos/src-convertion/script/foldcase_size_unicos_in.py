
import io
import json 
from lib import node
from lib.generator import size_function

try:	

	with open("json/unicode-case.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		nd.extend(data["code"], data["fold"])
		## nd.extend(data["lower"], data["fold"])
		## nd.extend(data["upper"], data["fold"])
		## nd.extend(data["title"], data["fold"])

	with open("dist/foldcase_size_unicos_in.c", "w") as stream:
		size_function.write("foldcase_size_unicos_in", nd, stream)
		
except KeyboardInterrupt:
	
	pass
