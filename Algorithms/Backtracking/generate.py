import random
import knapsack as ks

def generate_item():
    random_value = random.randint(50, 150)
    random_weight = (random.randint(1, 6)) * 5

    GeneratedItem = ks.Item(random_value, random_weight) 

    return GeneratedItem

def generate_list(size=10):
    generated_list = list()

    for i in range(size):
        item = generate_item()
        generated_list.append(item)

    return generated_list