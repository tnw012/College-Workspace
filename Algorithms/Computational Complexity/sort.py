# Swap
def swap(sortList, index, swapIndex):
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
def selectionSort(sortList):
    """
    Selection Sort
    --------------------------------------------------
    sortList    : Array or list to be sorted
    index       : Specifies the index of array or list
    minIndex    : Holds the first or beginning index
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
    while index < len(sortList) - 1:
        minIndex = index
        nestedIndex = index + 1
        while nestedIndex < len(sortList):
            if sortList[nestedIndex] < sortList[minIndex]:
                minIndex = nestedIndex
            nestedIndex += 1
        if minIndex != index:
            swap(sortList, minIndex, index)
        index += 1