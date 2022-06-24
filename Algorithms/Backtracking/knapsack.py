from dataclasses import dataclass
from operator import attrgetter

item_list = list()

@dataclass
class Item :
    value : int
    weight : int
    
    def __str__(self):
        string = f"value  : {str(self.value)}\n" \
                 f"weight : {str(self.weight)}\n"
        return string

class Knapsack:
    MAX_CAPACITY = 30

    def __init__(self):
        self.__knapsack = list()
        self.__total_value = 0
        self.__total_weight = 0
        self.__capacity = self.MAX_CAPACITY

    def __str__(self):
        self.__total_value = float("%.2f" % self.__total_value)

        string = f"Items in knapsack: {self.__knapsack}\n" \
        f"Total value of knapsack: {self.__total_value}\n" \
        f"Total weight of knapsack: {self.__total_weight}"        
        return string
    
    # Algorithm for the Knapsack Problem
    def dynamic(self, input_list):
        self.__knapsack = [[0 for x in range(self.MAX_CAPACITY + 1)] for x in range(len(input_list) + 1)]

        for i in range (len(input_list) + 1):
            for j in range(self.MAX_CAPACITY + 1):
                if i == 0 or j == 0:
                    self.__knapsack[i][j] = 0
                elif input_list[i - 1].weight <= j:
                    self.__knapsack[i][j] = max(input_list[i - 1].value + self.__knapsack[i - 1][j - input_list[i - 1].weight], self.__knapsack[i - 1][j])
                else:
                    self.__knapsack[i][j] = self.__knapsack[i - 1][j]

        return self.__knapsack[len(input_list)][self.MAX_CAPACITY]

    # Fractional Greedy Algorithm for the Knapsack Problem
    def fractional_greedy(self, input_list):
        fractional_value = 0.0
        self.__knapsack.clear()

        input_list.sort(key=attrgetter("value"), reverse=True)

        index = 0

        while (self.__total_weight < self.MAX_CAPACITY) or (self.__capacity > 0):

            if input_list[index].weight > self.__capacity:
                fractional_value = (self.__capacity / input_list[index].weight) * input_list[index].value
                
                self.__total_value += fractional_value

                input_list[index].weight = self.__capacity
            else:
                self.__total_value  += input_list[index].value
                
            self.__capacity -= input_list[index].weight
            self.__total_weight += input_list[index].weight

            self.__knapsack.append(input_list[index])
            index += 1

    def backtrack(self, index, weight, total):
        if (self.is_valid(index, weight, total)):
            if weight == self.MAX_CAPACITY:
                print(self.__knapsack[1:index])
            else:
                self.__knapsack.append(item_list[index])
                self.backtrack(index + 1, weight + item_list[index].weight, total - item_list[index].weight)
                self.backtrack(index + 1, weight, total - item_list[index].weight)

    def is_valid(self, index, weight, total):
        return (weight + total >= self.MAX_CAPACITY) and (weight == self.MAX_CAPACITY or weight + item_list[index].weight <= self.MAX_CAPACITY)