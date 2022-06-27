import random
import knapsack as ks

def generate_item():
    random_value = random.randint(50, 150)
    random_weight = random.randrange(5, 30, 5)

    GeneratedItem = ks.Item(random_value, random_weight) 

    return GeneratedItem

def generate_list(size=10):
    generated_list = list()

    for i in range(size):
        item = generate_item()
        
        while item_exists(generated_list, item):
            item = generate_item()

        generated_list.append(item)

    return generated_list

def item_exists(item_list, random_item):
    exists = False
    i = 0

    while i < len(item_list):
        if random_item.weight == item_list[i].weight:
            exists = True
        
        i += 1

    return exists
