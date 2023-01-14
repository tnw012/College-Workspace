import random

# This function generates array of integers
def generate_list(list_size=10):
    num_list = list()

    # Loop from loop_lower to loop_upper filling the array with no repeating ints
    for i in range(list_size):
        random_number = random.random()

        # Loop through array and check for repeating ints. If int repeats roll a random int again 
        for item in num_list:
            if random_number in num_list:
                random_number = random.random()

        num_list.append(random_number)

    return num_list
 