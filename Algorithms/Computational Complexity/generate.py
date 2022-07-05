import random

# This function generates array of integers
def generate_num_list(lower_bound, upper_bound, list_size):
    num_list = list()

    # Loop from loop_lower to loop_upper filling the array with no repeating ints
    for i in range(list_size):
        random_int = random.randint(lower_bound, upper_bound)

        # Loop through array and check for repeating ints. If int repeats roll a random int again 
        for item in num_list:
            if random_int in num_list:
                random_int = random.randint(lower_bound, upper_bound)

        num_list.append(random_int)

    return num_list
