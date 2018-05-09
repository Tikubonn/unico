
import io

def write (name, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("int is_%s_unicoc (unicoc* uni){\n" % (name,))
  stream.write("return is_%s_unicos(uni->beginning, uni->end, uni->unicos);\n" % (name,))
  stream.write("}\n")
  