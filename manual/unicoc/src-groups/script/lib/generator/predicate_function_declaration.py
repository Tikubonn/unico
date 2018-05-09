
import io

def write (name, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("extern int is_%s_unicoc (unicoc*);\n" % (name,))
  