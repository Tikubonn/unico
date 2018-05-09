
def write (name, node, stream):
  
  stream.write("#include <unico.h>\n")
  stream.write("#include <stddef.h>\n")
  stream.write("int %s (unicos *unia, size_t indexa, size_t enda, unicos *unib, size_t indexb, size_t endb){\n" % (name,))
  write1(node, stream)
  stream.write("}\n")
  
def write1 (node, stream):
  
  for n in range(1, 8):
    nds = node.ndepthes(n)
    if nds.nodes:
      stream.write("if (%d == enda - indexa){\n" % (n,))
      stream.write("switch (get_unicos(indexa, unia)){\n")
      for nd in nds.nodes:
        write2(1, nd, stream)
      stream.write("}\n")
      stream.write("}\n")
  stream.write("return 0;\n")

def write2 (depth, node, stream):
  
  stream.write("case 0x%x:\n" % (node.code,))
  
  if node.nodes:
    stream.write("switch (get_unicos(indexa + %d, unia)){\n" % depth)
    for nd in node.nodes:
      write2(depth +1, nd, stream)
    stream.write("default: return 0;\n")
    stream.write("}\n")
    
  else:
    write1a(node.data, stream)
    
def write1a (node, stream):
  
  for n in range(1, 8):
    nds = node.ndepthes(n)
    if nds.nodes:
      stream.write("if (%d == enda - indexa){\n" % (n,))
      stream.write("switch (get_unicos(indexb, unib)){\n")
      for nd in nds.nodes:
        write2a(1, nd, stream)
      stream.write("}\n")
      stream.write("}\n")
    
def write2a (depth, node, stream):
  
  stream.write("case 0x%x:\n" % (node.code,))
  
  if node.nodes:
    stream.write("switch (get_unicos(indexb + %d, unib)){\n" % depth)
    for nd in node.nodes:
      write2a(depth +1, nd, stream)
    stream.write("default: return 0;\n")
    stream.write("}\n")
    
  else:
    stream.write("return 1;\n")
