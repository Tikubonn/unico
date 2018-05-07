
import json
from lib.generator import predicate_function

with open("json/whitespace.json", "r") as stream:
	characters = json.load(stream)
	
with open("dist/is_whitespace_unico.c", "w") as stream:
	predicate_function.write("is_whitespace_unico", characters, stream)
