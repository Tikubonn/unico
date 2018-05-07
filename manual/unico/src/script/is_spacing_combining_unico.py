
import json
from lib.generator import predicate_function

with open("json/spacing-combining.json", "r") as stream:
	characters = json.load(stream)
	
with open("dist/is_spacing_combining_unico.c", "w") as stream:
	predicate_function.write("is_spacing_combining_unico", characters, stream)
