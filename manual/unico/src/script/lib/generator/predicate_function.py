
def write (name, characters, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("int %s (unico code){\n" % name)
  write2(characters, stream)
  stream.write("}\n")
  
def write2 (characters, stream):
  
  stream.write("switch (code){\n")
  
  for char in characters:
    stream.write("case 0x%x: return 1;\n" % char)
  
  stream.write("default: return 0;\n")
  stream.write("}\n")
