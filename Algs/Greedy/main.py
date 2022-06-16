# Python Modules

# My Modules
from knapsack import Knapsack 

PROGRAM_TITLE = "Knapsack Test Program"
MAIN_BORDER_CHAR = "*"
BORDER_WIDTH = 50

if __name__ == "__main__":
    ks = Knapsack()

    # print the border and titile of the program
    print(MAIN_BORDER_CHAR * BORDER_WIDTH)
    print(PROGRAM_TITLE)

    ks.generate_list()

    

    print(ks)

    # print the bottom border of the program
    print(MAIN_BORDER_CHAR * BORDER_WIDTH)
    print("Program Finished!")