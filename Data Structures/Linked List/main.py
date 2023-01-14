from linked_list import SgLinkedList
from arrays import Array

def main():
    ALPHABET_TUPLE = ("a", "b", "c", "d", "e", "f", "g",
                      "h", "i", "j", "k", "l", "m", "n",
                      "o", "p", "q", "r", "s", "t", "u",
                      "v", "w", "x", "y", "z")
    alphabetLinked = SgLinkedList()
    integerLinked  = SgLinkedList()
    alphabetArray  = Array(26)
    integerArray   = Array(10)

    # Fill the alphabet array
    for index in range(len(ALPHABET_TUPLE)):
        alphabetArray.insert(index, ALPHABET_TUPLE[index])

    # Print both the tuple and the array
    print("Alphabet Tuple")
    print(ALPHABET_TUPLE, "\n")
    print("Alphabet Array")
    print(alphabetArray, "\n")

    # Create single linked list
    for item in alphabetArray:
        alphabetLinked.insert_end(item)

    # Print linked list
    print("Alphabet Single Linked List")
    alphabetLinked.print_list()

    # Fill integer array
    for index in range(0, 10):
        integerArray.insert(index, (index * 6) / 1.25)

    # Print Integer Array
    print("Integer Array")
    print(integerArray, "\n")

    # Create an integer single linked list
    for item in integerArray:
        integerLinked.insert_end(item)

    # Print integer linked list
    print("Integer Single Linked List")
    integerLinked.print_list()


if __name__ == '__main__':
    main()
