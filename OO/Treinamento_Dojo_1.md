Dojo - Orientação a Objetos

Pergunta: O que é herança em Python?
Resposta: Para não se fazer novas classes do zero, pode-se usar a herança quando há variáveis dentro de uma classe que também estão contidas em outra para deixar o código mais enxuto.

Pergunta: Qual é a função do método `__str__`?
Resposta: O método __str__ devolve uma string armazenada no atributo text

Pergunta: O que é polimorfismo?
Resposta: Conceito em OO que permite que objetos de diferentes classes sejam tratados como objetos de uma classe comum (caẽs, gatos e seres humanos são mamíferos) - desta forma, é possível escrever um código mais genérico e flexível e facilita a manutenção e extensão do sistema.

class Animal:
  def fazer_som(self):
    pass

class Cachorro(Animal):
  def fazer_som(self):
    return "Au Au"

class Gato(Animal):
  def fazer_som(self):
    return "Miau"

Pergunta: Importância do encapsulamento em OO/Python?
Resposta: Proteção de dados contra acesso e modificação direta por outras classes. Para achar uma parte sensível do seu código, vc precisa passar por diversas "barreiras"

Pergunta: Como diferenciar classe de objeto em OO?
Resposta: O objeto é uma instância de uma classe. O objeto "Mobi" faz parte da classe "Carro". E a classe reúne objetos com características similares.