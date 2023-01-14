# Swap
def __swap(sort_list, index, swap_index):
    """
    Swap Sort Algorithm: Basic sorting algorithm
    --------------------------------------------------
    sort_list  : Array or list to be sorted
    index     : Specifies the index of array or list
    swap_index :
    temp      : Placeholder for a temporary array
    --------------------------------------------------
    """
    temp = sort_list[index]
    sort_list[index] = sort_list[swap_index]
    sort_list[swap_index] = temp

# Selection Sort
def selection_sort(sort_list):
    """
    Selection Sort
    ---------------------------------------------------
    sort_list    : Array or list to be sorted
    index        : Specifies the index of array or list
    min          : Holds the first or beginning index
    nested_index : Represents the index that is nested
    ---------------------------------------------------
    Time Complexity  :
        O(n^2) for all cases
    Space Complexity :
        O(1) for worst case
    ---------------------------------------------------
    """
    index = 0
    # Outer Loop that runs the length of the list being sorted.
    while index < len(sort_list) - 1:
        min = index
        nested_index = index + 1
        while nested_index < len(sort_list):
            if sort_list[nested_index] < sort_list[min]:
                min = nested_index
            nested_index += 1
        if min != index:
            __swap(sort_list, min, index)
        index += 1
        