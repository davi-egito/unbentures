class pencil:
    def __init__(self,x):
        self.__cor = x
    
    def escrever(self,txt):
        print(f"minha cor{self.__cor} e o txt eh {txt}")
        
    def get_cor(self):
        return self.__cor
    
    def set_cor(self,cor):
        cores = ['black', 'red','blue']
        self.__cor = cor if cor in cores else "black"
        