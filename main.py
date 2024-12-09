from abc import abstractmethod, ABC

class Movable(ABC):
    @abstractmethod
    def move() -> None:
        pass

class Person(ABC):
    def __init__(self, name: str, age: int) -> None:
        self.name = name
        self.__age = age
        
    @property
    def age(self) -> int:
        return self.__age
        
    @age.setter   
    def age(self, age: int) -> None:
        self.__age = age
    
    @abstractmethod
    def sound() -> None:
        pass

    def __str__():
        return "lol"
        

import this
print(this)
p = Person("tamir", 10)  
