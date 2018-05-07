
import io
from lib import node

def write (name, node, stream):
	
	stream.write("#include <unico.h>\n")
	stream.write("#include <stddef.h>\n")
	stream.write("\n")
	stream.write("size_t %s (size_t index, size_t end, unicos *uni, size_t *indexout){\n" % name)
	write1(node, stream)
	stream.write("}\n")

def write1 (node, stream):
	
	for depth in reversed(range(8)):
		nds = node.ndepthes(depth)
		if nds.nodes:
			stream.write("if (%d <= end - index){\n" % depth)
			stream.write("switch (get_unicos(%d, uni)){\n" % 0)
			for nd in nds.nodes:
				write2(0, nd, stream)
			stream.write("default:\n")
			stream.write("*indexout = index +1;\n")
			stream.write("return 0;\n")
			stream.write("}\n")
			stream.write("}\n")
			
	stream.write("*indexout = index +1;\n")
	stream.write("return 1;\n")

def write2 (depth, node, stream):
	
	if node.nodes:
		stream.write("case 0x%x: \n" % node.code)
		stream.write("switch (get_unicos(%d, uni)){\n" % (depth +1))
		for nd in node.nodes:
			write2(depth +1, nd, stream)
		stream.write("default:\n")
		stream.write("*indexout = index +1;\n")
		stream.write("return 1;\n")
		stream.write("}\n")
	
	else:
		stream.write("case 0x%x:\n" % node.code)
		stream.write("*indexout = index + %d;\n" % len(node.data))
		stream.write("return %d;\n" % len(node.data))
