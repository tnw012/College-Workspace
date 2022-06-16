import random
import math

# Global Constants
RANDOM_LOWER_BOUND = 1
RANDOM_UPPER_BOUND = 15

# Divide and Conquer
def  dnc_binomial(n, k):
    if (k == 0) or (n == k):
        return 1
    else:
        return dnc_binomial(n - 1, k - 1) + dnc_binomial(n - 1, k)

# Dynamic Programming implementation
def dynamic_binomial(n, k):
    
    # create multidimensional list 
    coefficient_list = [[0 for i in range(k + 1)] for i in range(n + 1)]

    # loop through each index of coefficient_list
    for i in range(n + 1):

        # loop through each sub index
        for j in range(min(i, k) + 1):
            if (j == 0 or j == i):
                coefficient_list[i][j] = 1
            else:
                coefficient_list[i][j] = coefficient_list[i -1][j - 1] + coefficient_list[i - 1][j]

    return coefficient_list[n][k]

# test function that handles the test of each binomial coefficient algorithm
def test_binomial(binomial_function, test_number=100):
    import array
    import math
    import time

    # nested function to help with calculating the average time.
    def calculate_average_time(t_array):
        total_t = 0
        avg_t = 0.0

        for t in t_array:
            total_t += t

        avg_t = total_t / len(t_array)

        return avg_t
    
    # objects and variables
    time_array = array.array("f")
    average_time = 0.0
    
    # loop from 0 to test_number(number of tests)
    for i in range(test_number):
        binomial_coefficient = 0

        # generate two random integers n and k
        n = random.randint(RANDOM_LOWER_BOUND, RANDOM_UPPER_BOUND)
        k = random.randint(RANDOM_LOWER_BOUND, n)

        # start the timer 
        start_time = time.perf_counter()
        binomial_coefficient = binomial_function(n, k)
        end_time = time.perf_counter()

        # compare algorithm to pythons math.comb()
        if (math.comb(n, k) != binomial_coefficient):
            print("\nTest Fail: coefficients do not match!")
            break
        else:
            # calculate the total time in milliseconds then append time to a time array.
            run_time = (end_time - start_time) * 1000
            time_array.append(run_time)
        

    # calculate the average time during the test.
    average_time = calculate_average_time(time_array)

    print(f"The binomial coefficient of {n} choose {k} = {binomial_coefficient}")
    print("The average time out of %i tests was %.4f ms" % (test_number, average_time))

# driver code for testing
def main():
    WIDTH = 50

    print("*" * WIDTH)
    print("Binomial Coefficient Test Program")

    # loop five times creating a test case for each loop
    for i in range(5):
        print("-" * WIDTH)
        print(f"TEST CASE: {i + 1}")        

        # loop twice to test each algorithm
        for j in range(2):        
            if j == 0:
                print("\nTesting binomial coefficient with divide and conquer")
                test_binomial(dnc_binomial)
                print()
            else:
                print("Testing binomial coefficient with dynamic programming")
                test_binomial(dynamic_binomial)
        
    print("*" * WIDTH)    
    print("\nProgram Finished")

    print(dynamic_binomial(4,2), math.comb(4, 2))

if __name__ == "__main__":
    main()