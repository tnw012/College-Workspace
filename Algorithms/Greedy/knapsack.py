from dataclasses import dataclass
import random

@dataclass
class Item :
    value : int
    weight : int
    
    def __str__(self):
        string = f"value  : {str(self.value)}\n" \
                 f"weight : {str(self.weight)}\n"
        return string

class Knapsack:

    # Class Variabless
    MAX_WEIGHT = 30

    def __init__(self, size=10):
        self.knapsack = list()
        self.__item_list = list()
        self.__total_items = 0
        self.__size = size
        self.__total_weight = 0

    def __str__(self):
        string = f"item list    : {self.__item_list}\n" \
        f"total number of items : {self.__total_items}\n" \
        f"total weight          : {self.__total_weight}\n"
        
        return string

    def __generate_item(self):
        random_value = random.randint(50, 150)
        random_weight = random.randint(1, 30) 

        GeneratedItem = Item(random_value, random_weight) 

        return GeneratedItem

    def generate_list(self):
        for i in range(self.__size):
            item = self.__generate_item()
            self.__item_list.append(item)

    def find_optimal(self):

        self.__generate_list()

        for index in self.__item_list:
            if self.__total_weight > self.MAX_WEIGHT:
                print("Knapsack has gone over weight capacity.")
                return None
            else:
                pass
