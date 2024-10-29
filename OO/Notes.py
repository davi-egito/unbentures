class point:
  def __init__(self,x,y):
    self.__x=x
    self.__y=y

  def set(self,x,y):
    self.__x=x
    self.__y=y

  def distance(self):
    return (self.__x**2+self.__y**2)**0.5

  def get_x(self):
    return self.__x

class circulo(point):

  def __init__(self,x,y,r):
    super().__init__(x,y)
    self.r=r

  def interferencia(self, ponto):
    pass

  def imprimir(self):
    print(f"Eu sou um ponto e minhas coordenadas são {self._x},{self._y}. Meu raio é {self.r}")

class linha_1:

  def __init__(self,pt1,pt2):
    self.pt1=pt1
    self.pt2=pt2

class Linha_2:

  def __init__(self,x1,y1,x2,y2):
    self.pt1=Point(x1,y1)
    self.pt2=Point(x2,y2)