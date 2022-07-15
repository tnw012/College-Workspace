def test_binpacking(num_list, capacity, test_number=100):
    import array
    import time
    
    import bin_packing as bp

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
        
    # loop twice to test both algorithm
    for index in range(2):

        if index == 0:
            print("Testing NP-Completeness next-fit:")

            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                start_time = time.perf_counter()
            
                
                next_bin_total = bp.next_fit(num_list, capacity)
            
            
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
            print("next-fit number of bins: ", next_bin_total)
        else:
            print("\nTesting NP-Completeness best-fit:")
            
            # loop from 0 to test_number(number of tests)
            for i in range(test_number):
                
                start_time = time.perf_counter()            
            
                best_bin_total = bp.best_fit(num_list, capacity, len(num_list))
            
                end_time = time.perf_counter()

                # calculate the total time in milliseconds then append time to a time array.
                run_time = (end_time - start_time) * 1000
                time_array.append(run_time)

            # calculate the average time during the test.
            average_time = calculate_average_time(time_array)

            print("The average time out of %i tests = %.4f ms" % (test_number, average_time))
            print("best-fit number of bins required: ", best_bin_total)