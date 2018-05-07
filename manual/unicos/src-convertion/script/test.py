
import io
import json 
from lib import node
from lib.generator import predicate_function

try:	

	with open("json/unicode-case.json", "r") as stream:
		datas = json.load(stream)

	nd = node.RootNode()

	for data in datas:
		data["code"] != data["upper"] and nd.extend(data["upper"], True)

	print(nd.ndepthes(0))

except KeyboardInterrupt:
	
	pass
