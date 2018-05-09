
def write (name, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("#include <stddef.h>\n")
  stream.write("extern int %s (size_t, size_t, unicos*);\n" % name)
