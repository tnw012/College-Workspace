# python modules
import array
import copy
import random
import time

from mergesort import sort



# nested function to help with calculating the average time.
def calculate_average_time(t_array):
    total_t = 0
    avg_t = 0.0

    for t in t_array:
        total_t += t

    avg_t = total_t / len(t_array)

    return avg_t

# test function that handles the test of each knapsack problem algorithms
def test_search(test_function, key, search_list, test_number=100): 
    time_array = array.array("f")
    average_time = 0.0
    
    # loop from 0 to test_number(number of tests)
    for i in range(test_number):

        # run the timer to test algorithm
        start_time = time.perf_counter()            
        found_item = test_function(key, search_list)
        end_time = time.perf_counter()
        
        if (found_item == -1):
            return print ("The item you are looking for is not found")

        # calculate the total time in milliseconds then append time to a time array.
        run_time = (end_time - start_time) * 1000
        time_array.append(run_time)

    # calculate the average time during the test.
    average_time = calculate_average_time(time_array)

    print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
    print("Size of the array:", len(search_list))
    print("Index of Item Searched: ", found_item)
    
def test_sort(test_function, sort_list, low=None, high=None, test_number=100):
        time_array = array.array("f")
        average_time = 0.0
        unsorted_list = copy.copy(sort_list)
        
        if (low is None and high is None):
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):

                # run the timer to test algorithm
                start_time = time.perf_counter()            
                test_function(unsorted_list)
                end_time = time.perf_counter()
                
                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

        else:
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):

                # run the timer to test algorithm
                start_time = time.perf_counter()            
                test_function(unsorted_list, low, high)
                end_time = time.perf_counter()
                
                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

        # calculate the average time during the test.
        average_time = calculate_average_time(time_array)

        print("Original Array:\n", sort_list, "\n")
        print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
        print("Size of the array:", len(unsorted_list), "\n")
        print("Sorted Array:\n", unsorted_list)
                