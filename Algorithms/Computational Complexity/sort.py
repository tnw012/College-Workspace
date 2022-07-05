# Swap
def __swap(sortList, index, swapIndex):
    """
    Swap Sort Algorithm: Basic sorting algorithm
    --------------------------------------------------
    sortList  : Array or list to be sorted
    index     : Specifies the index of array or list
    swapIndex :
    temp      : Placeholder for a temporary array
    --------------------------------------------------
    """
    temp = sortList[index]
    sortList[index] = sortList[swapIndex]
    sortList[swapIndex] = temp

# Selection Sort
def selection_sort(sort_list):
    """
    Selection Sort
    --------------------------------------------------
    sortList    : Array or list to be sorted
    index       : Specifies the index of array or list
    min         : Holds the first or beginning index
    nestedIndex : Represents the index that is nested
    --------------------------------------------------
    Time Complexity  :
        O(n^2) for all cases
    Space Complexity :
        O(1) for worst case
    --------------------------------------------------
    """
    index = 0
    # Outer Loop that runs the length of the list being sorted.
    while index < len(sort_list) - 1:
        min = index
        nestedIndex = index + 1
        while nestedIndex < len(sort_list):
            if sort_list[nestedIndex] < sort_list[min]:
                min = nestedIndex
            nestedIndex += 1
        if min != index:
            __swap(sort_list, min, index)
        index += 1
        