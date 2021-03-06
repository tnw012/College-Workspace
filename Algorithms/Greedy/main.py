import generate as g
import knapsack as ks

PROGRAM_TITLE = "Knapsack Test Program"
MAIN_BORDER_CHAR = '*'
BORDER_CHAR = '-'
BORDER_WIDTH = 50

# test function that handles the test of each knapsack problem algorithms
def test_knapsack(test_number=10):
    import array
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
    
    item_list = g.generate_list()
    
    # loop twice to test both algorithm
    for index in range(2):

        if index == 0:
            print("Testing the Fractional Greedy Algorithm")
            
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                knapsack   = ks.Knapsack()

                start_time = time.perf_counter()
                knapsack.fractional_greedy(item_list)
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests was %.4f ms\n" % (test_number, average_time))
            print(knapsack, "\n")
        else:
            print("Testing the Dynamic Algorithm")
            
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                knapsack   = ks.Knapsack()

                start_time = time.perf_counter()
                optimal_value = knapsack.dynamic(item_list)
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests was %.4f ms" % (test_number, average_time))
            print(optimal_value)
            print()

def main():

    # print the border and titile of the program
    print(MAIN_BORDER_CHAR * BORDER_WIDTH)
    print(PROGRAM_TITLE)
    print(BORDER_CHAR * BORDER_WIDTH)
    
    test_knapsack()

    # print the bottom border of the program
    print(MAIN_BORDER_CHAR * BORDER_WIDTH)
    print("Program Finished!")

if __name__ == "__main__":
    main()
