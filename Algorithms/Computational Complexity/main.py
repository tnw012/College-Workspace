# my modules
import generate as g
import mergesort as ms
import search 
import sort


program_dict = {
    "TITLE" : "Computational Complexity Test Program",
    "MAIN_BORDER": "*",
    "BORDER":"-",
    "BORDER_WIDTH": 50
}

# test function that handles the test of each knapsack problem algorithms
def test_complexities(test_number=100):
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
    generated_list = list()
    average_time = 0.0
    
    # generate a list then sort it by weight
    generated_list = g.generate_num_list(5)
        
    # loop twice to test both algorithm
    for index in range(2):

        if (index == 0):
            print("Testing Searching Algorithms")
            
            print(generated_list.sort())
            

            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                start_time = time.perf_counter()
            
            
            
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
        else:
            print("\nTesting Sorting Algorithm")
            
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                
                start_time = time.perf_counter()
            
            
            
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
    
def main():  
    # print the border and title of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print(program_dict["TITLE"])
    print(program_dict["BORDER"] * program_dict["BORDER_WIDTH"])

    test_complexities()

    # print the bottom border of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print("Program Finished!")

if __name__ == "__main__":    
    main()
    