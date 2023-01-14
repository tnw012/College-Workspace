from math import ceil
import random as r

# my modules
import generate as g
import test as t

program_dict = {
    "TITLE" : "NP-Completeness Test Program",
    "MAIN_BORDER": "*",
    "BORDER":"-",
    "BORDER_WIDTH": 50
}
    
def main():  
    
    # constants
    BIN_CAPACITY     = 1
    LIST_SIZE        = 1000
    
    # objects and variables
    generated_list   = list()
    
    # generate a random list of numbers 
    generated_list = g.generate_list(LIST_SIZE) 

    # print the border and title of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print(program_dict["TITLE"])
    print(program_dict["BORDER"] * program_dict["BORDER_WIDTH"])
    
    print("list size: " + str(len(generated_list)))
    
    print("minimum number of bins: ", ceil((sum(generated_list) / BIN_CAPACITY)), "\n")
    
    t.test_binpacking(generated_list, BIN_CAPACITY)
    
    # print the bottom border of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print("Program Finished!")

if __name__ == "__main__":    
    main()
    