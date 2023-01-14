import search_algorithms
import input

numList = [20, 44, 48, 55, 62, 66, 74, 88, 93, 99]
NUM_PROMPT = "Input number to search from the list " + str(numList) + " "
NOT_FOUND = "ERROR! item not found!\n"

def main():
    searchKey = input.input_data(NUM_PROMPT, "i")
    while searchKey != 00:
        numIndex = search_algorithms.binary_search(searchKey, numList)
        if numIndex != -1:
            print("the item \"" + str(searchKey) + "\" is located at the index " + str(numIndex) + "\n")
        else:
            print(NOT_FOUND)
        searchKey = input.input_data(NUM_PROMPT, "i")


if __name__ == '__main__':
    main()
