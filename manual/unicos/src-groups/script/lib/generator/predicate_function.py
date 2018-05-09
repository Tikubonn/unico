
def write (name, node, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("#include <stddef.h>\n")
  stream.write("int %s (unicos *uni, size_t index, size_t end){\n" % name)
  write1(node, stream)
  stream.write("return 0;\n")
  stream.write("}\n")

def write1 (node, stream):
  
  for n in range(1, 8):
    nds = node.ndepthes(n)
    if nds.nodes:
      for nd in nds.nodes:
        stream.write("if (%d == end - index){\n" % n)
        stream.write("switch (get_unicos(index, uni)){\n")
        write2(0, nd, stream)
        stream.write("default: return 0;\n")
        stream.write("}\n")
        stream.write("}\n")

def write2 (depth, node, stream):
  
  stream.write("case 0x%x:\n" % (node.code,))
  
  if node.nodes:
    stream.write("switch (get_unicos(index +%d, uni)){\n" % (depth,))
    for nd in node.nodes:
      write2(depth +1, nd, stream)
    stream.write("default: return 0;\n")
    stream.write("}\n")
    
  else:
    stream.write("return 1;\n")
