from dataclasses import dataclass

item_list = list()
include = list()
MAX_WEIGHT = 30

@dataclass
class Item :
    value : int
    weight : int
    
    def __str__(self):
        string = f"value  : {str(self.value)}\n" \
                 f"weight : {str(self.weight)}\n"
        return string
    
def breadth_knapsack():
    pass

def best_knapsack():
    pass