import test as t


program_dict = {
    "TITLE" : "Computational Complexity Test Program",
    "MAIN_BORDER": "*",
    "BORDER":"-",
    "BORDER_WIDTH": 50
}
    
def main():  
    # print the border and title of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print(program_dict["TITLE"])
    print(program_dict["BORDER"] * program_dict["BORDER_WIDTH"])

    t.test_complexities()

    # print the bottom border of the program
    print(program_dict["MAIN_BORDER"] * program_dict["BORDER_WIDTH"])
    print("Program Finished!")

if __name__ == "__main__":    
    main()
    