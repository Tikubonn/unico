
import io

class NodeBase:
  
  def __init__ (self, nodes=[]):
    
    self.nodes = nodes[:]
    
  def ndepth (self, depth):
    
    if 0 == depth:
      return bool(self.data)
    
    elif 0 < depth:
      for node in self.nodes:
        if node.ndepth(depth -1):
          return True
      return False
    
    else:
      return False
    
  def ndepthes (self, depth):
    
    if self.ndepth(depth):
      nd = Node(self.code, self.data)
      for node in self.nodes:
        nda = node.ndepthes(depth -1)
        nda and nd.append(nda)
      return nd
    return None
    
  def append (self, node):
    
    ## self.nodes.append(node)
    for i, nd in enumerate(self.nodes):
      if node.code < nd.code:
        self.nodes.insert(i, node)
        return
    self.nodes.append(node)
    return
    
  def extend (self, sequence, data=None):
    
    if sequence:
      for node in self.nodes:
        if node.code == sequence[0]:
          return node.extend(sequence[1:], data)
      
      nd = Node(sequence[0])
      self.append(nd)
      nd.extend(sequence[1:], data)
      
    else:
      self.data = data
  
  def write (self, depth, stream):

    self.write_nodes(depth, stream)
  
  def write_nodes (self, depth, stream):
    
    for node in self.nodes:
      node.write(depth +1, stream)
      
  def __str__ (self):
    
    with io.StringIO() as stream:
      self.write(0, stream)
      return stream.getvalue()
    
class Node (NodeBase):
  
  def __init__ (self, code, data=None, nodes=[]):

    super().__init__(nodes)
    self.code = code
    self.data = data
      
  def write (self, depth, stream):
    
    stream.write("  " * depth)
    stream.write("%x: %s\n" % (self.code, self.data))
    self.write_nodes(depth, stream)
  
class RootNode (NodeBase):
  
  def write_nodes (self, depth, stream):
    
    for node in self.nodes:
      node.write(0, stream)
  
  def ndepthes (self, depth):
    nd = RootNode()
    for node in self.nodes:
      nda = node.ndepthes(depth)
      nda and nd.append(nda)
    return nd
