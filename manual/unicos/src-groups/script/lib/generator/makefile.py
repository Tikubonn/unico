
import io

class command:
  
  def __init__ (self, command, arguments=[]):
    
    self.command = command
    self.arguments = list(arguments)
    
  def __str__ (self):

    return "%s %s" % (self.command, " ".join(self.arguments))
    
  def add_argument (self, argument):
    
    self.arguments.append(argument)

class recipe:
  
  def __init__ (self, dist, depends=[], commands=[]):
    
    self.dist = dist
    self.depends = list(depends)
    self.commands = list(commands)
    
  def __str__ (self):
    
    with io.StringIO() as stream:
      self.write(stream)
      return stream.getvalue()
  
  def add_depend (self, depend):
    
    self.depends.append(depend)
    
  def add_command (self, command):
    
    self.commands.append(command)
  
  def write (self, stream):
    
    stream.write("%s: %s\n" % (self.dist, " ".join(self.depends)))
    for command in self.commands:
      stream.write("\t%s\n" % (command,))
    stream.write("\n")

class makefile:
  
  def __init__ (self):
    
    self.recipes = list()
    self.independ_recipes = list()
    self.commands = list() 
    
  def __str__ (self):
    
    with io.StringIO() as stream:
      self.write(stream)
      return stream.getvalue()
  
  def add_command (self, command):

    self.commands.append(command)
  
  def add_recipe (self, recipe):
    
    self.recipes.append(recipe)
    
  def add_independ_recipe (self, recipe):
    
    self.independ_recipes.append(recipe)
  
  def write (self, stream):
    
    self.write_all(stream)
    self.write_recipes(stream)
    self.write_independ_recipes(stream)
  
  def write_all (self, stream):
    
    stream.write("all:\n")
    for command in self.commands:
      stream.write("\t%s\n" % (command,))
    for recipe in self.recipes:
      stream.write("\tmake %s\n" % (recipe.dist,))
    stream.write("\n")
    
  def write_recipes (self, stream):
    
    for recipe in self.recipes:
      recipe.write(stream)
    
  def write_independ_recipes (self, stream):
    
    for recipe in self.independ_recipes:
      recipe.write(stream)
