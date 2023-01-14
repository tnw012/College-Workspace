import random
import knapsack as ks

def generate_item():
    random_value = random.randint(50, 150)
    random_weight = random.randrange(5, 30, 5)

    GeneratedItem = ks.Item(random_value, random_weight) 

    return GeneratedItem

def generate_list(size=10):
    generated_list = list()
    count = 0

    def count_items(item_list, item_weight):
        count = 0
        i = 0

        while i < len(item_list):
            if item_list[i].weight == item_weight:
                count += 1
            
            i += 1

        return count

    for i in range(size):
        item = generate_item()

        if item.weight > 15:
            count = count_items(generated_list, item.weight)

            if count > 0:
                item = generate_item()
        else:
            count = count_items(generated_list, item.weight)

            if count > 1:
                item = generate_item()

        generated_list.append(item)

    return generated_list
