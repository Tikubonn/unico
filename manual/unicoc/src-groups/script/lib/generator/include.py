
import io

class absolute:
  
  def __init__ (self, fname):
    
    self.fname = fname
    
  def __str__ (self):
    
    return "#include <%s>" % (self.fname,)
  
class relative:
  
  def __init__ (self, fname):
    
    self.fname = fname
    
  def __str__ (self):
    
    return "#include \"%s\"" % (self.fname,)
  
class include:
  
  def __init__ (self, once=True):
    
    self.once = once
    self.depends = list()
    
  def __str__ (self):
    
    with io.StringIO() as stream:
      self.write(stream)
      return stream.getvalue()
    
  def append (self, depend):
    
    self.depends.append(depend)
    
  def write (self, stream):
    
    if self.once:
      stream.write("#pragma once\n")
    
    for depend in self.depends:
      stream.write("%s\n" % (str(depend),))
    stream.write("\n")
