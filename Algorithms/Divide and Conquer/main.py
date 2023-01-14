# Python Modules
import array
import random
import time
import copy

# My Modules
import mergesort
import quicksort

# This function prints data from test functions to output_data.txt
def print_to_file(file_name, array, sorted_array, time, width, sort_string):
    file = open(file_name, "a")
    
    if sort_string == "Merge sort":

        file.write("*" * width + "\n")
        file.write("Original Array:\n" + str(array) + "\n")
        file.write("-" * width + "\n")

        file.write(f"{sort_string} average sorting time %.4f ms" % time)
        file.write("\n")
        file.write(str(sorted_array) + "\n\n")
    else:
        file.write(f"{sort_string} average sorting time %.4f ms" % time)
        file.write("\n")
        file.write(str(sorted_array) + "\n")
        file.write("*" * width + "\n\n")

    file.close()

def test_sort_algorithms(SortType, test_array, number_of_tests, width):
    MERGE = "Merge sort"

    time_array = array.array("f")
    total_time = 0
     
    for i in range(0, number_of_tests):
        time_taken = 0
        unsorted_array = copy.copy(test_array)

        start = time.time()
        SortType.sort(unsorted_array, 0, len(unsorted_array) - 1)
        end = time.time()

        time_taken = (end - start) * 1000
        time_array.append(time_taken)
    
    sorted_array = unsorted_array

    for index in time_array:
        total_time += index

    avg_time = total_time / len(time_array)

    print_to_file("Divide and Conquer/output_data.txt", test_array, sorted_array, avg_time, width, MERGE)
    
# This function test quick sort
def test_quicksort(test_array, number_of_tests, width):
    QUICK = "Quick sort"

    time_list = array.array("f")
    total_time = 0

    for i in range(0, number_of_tests):
        time_taken = 0
        unsorted_array = copy.copy(test_array)

        start = time.time()
        quicksort.sort(unsorted_array, 0, len(unsorted_array) - 1)
        end = time.time()

        time_taken = (end - start) * 1000
        time_list.append(time_taken)

    sorted_array = unsorted_array

    for index in time_list:
        total_time += index

    avg_time = total_time / len(time_list)    

    print_to_file("Divide and Conquer/output_data.txt", test_array, sorted_array, avg_time, width, QUICK)

# This function generates array of integers
def generate_num_list(random_lower, random_upper, loop_lower, loop_upper):
    num_list = list()

    # Loop from loop_lower to loop_upper filling the array with no repeating ints
    for i in range(loop_lower, loop_upper):
        random_int = random.randint(random_lower, random_upper)

        # Loop through array and check for repeating ints. If int repeats roll a random int again 
        for item in num_list:
            if random_int in num_list:
                random_int = random.randint(random_lower, random_upper)

        num_list.append(random_int)

    return num_list

def main():
    CHARACTER_WIDTH = 150
    TEST_RUNS = 1000

    list_of_arrays = list()

    # Loop from 0 to 5 filling list_holder with random list of numbers
    for i in range(0, 5):
        random_array_size = random.randint(10, 40)
        random_int_array = generate_num_list(0, 100, 0, random_array_size)
        list_of_arrays.append(random_int_array)

    # Loop through each sub array and run timer test for both algorithms
    for sub_array in list_of_arrays:
        test_sort_algorithms(mergesort, sub_array, TEST_RUNS, CHARACTER_WIDTH)
        #test_sort_alorithms(quicksort, sub_array, TEST_RUNS, CHARACTER_WIDTH)

# Run main()
if __name__ == "__main__":
    main()
