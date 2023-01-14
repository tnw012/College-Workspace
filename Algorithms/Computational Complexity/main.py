import random as r
import copy

# my modules
import test as t
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
    
def main():  
    # objects and variables
    generated_list = list()
    search_key = 0
    
    # print the border and title of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print(program_dict["TITLE"])
    
    
    # generate a list then sort it by weight
    generated_list = g.generate_num_list(1, 100, 100)
    
    # generate a random search thats in the list
    search_key = generated_list[r.randint(0, len(generated_list) - 1)]

    for i in range(4):
        print(program_dict["BORDER"] * program_dict["BORDER_WIDTH"])
        
        if (i == 0):
            print("Binary Search Test:\n")
            
            temp_list = copy.copy(generated_list)
            temp_list.sort()
            
            t.test_search(search.binary_search, search_key, temp_list)
            
        elif (i == 1):
            print("Sequential Search Test: (Array not sorted)\n")
            
            t.test_search(search.sequential_search, search_key, generated_list)
        
        elif (i == 2):
            print("Mergesort Test:\n")
            
            t.test_sort(ms.sort, generated_list, 0, len(generated_list) - 1)
        
        elif (i == 3):
            print("Selection Sort Test:\n")
            
            t.test_sort(sort.selection_sort, generated_list)
        
        else:
            print("nothing to test")

    # print the bottom border of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print("Program Finished!")

if __name__ == "__main__":    
    main()
    