
import io
from lib import node

def write (name, node, stream):
	
	stream.write("#include <unico.h>\n")
	stream.write("#include <stddef.h>\n")
	stream.write("\n")
	stream.write("int %s (size_t index, size_t end, unicos *uniout, size_t *indexout){\n" % name)
	write1(node, stream)
	stream.write("}\n")

def write1 (node, stream):
		
	for depth in reversed(range(8)):
		nds = node.ndepthes(depth)
		if nds.nodes:
			stream.write("if (%d <= end - index){\n" % depth)
			stream.write("switch (get_unicos(index +%d, uniout)){\n" % 0)
			for nd in nds.nodes:
				write2(0, nd, stream)
			stream.write("default:\n")
			stream.write("*indexout = index +1;\n")
			stream.write("return 0;\n")
			stream.write("}\n")
			stream.write("}\n")

	stream.write("*indexout = index +1;\n")
	stream.write("return 0;\n")

def write2 (depth, node, stream):
	
	if node.nodes:
		stream.write("case 0x%x:\n" % node.code)
		stream.write("switch (get_unicos(index +%d, uniout)){\n" % (depth +1))
		for nd in node.nodes:
			write2(depth +1, nd, stream)
		stream.write("default:\n")
		stream.write("*indexout = index +1;\n")
		stream.write("return 0;\n")
		stream.write("}\n")
	
	else:
		stream.write("case 0x%x: {\n" % node.code)
		stream.write("unico data[] = {")
		stream.write(", ".join([ "0x%x" % num for num in node.data ]))
		stream.write("};\n")
		stream.write("*indexout = index + %d;\n" % (depth +1))
		stream.write("return replace_unicos_manually(data, sizeof(data) / sizeof(unico), index, index +%d, uniout);\n" % (depth +1))
		stream.write("}\n")
