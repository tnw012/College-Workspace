# Binary Search functions
def binary_search(search_key, sorted_list):
    """
    Binary Search Algorithm: Must be sorted to work
    --------------------------------------------------
    sorted_list : Array or list to be sorted
    search_key  : Holds the item to search for
    left        : Beginning index of the array or list
    right       : Last index of the array or list
    mid         : Middle index of the array or list
    --------------------------------------------------
    Time Complexity  :
    --------------------------------------------------
    Average Case -> O(log n)
    Worst Case  ->  O(n)
    --------------------------------------------------
    """
    left = 0
    right = len(sorted_list) - 1
    while left <= right:
        mid = (left + right) // 2
        if sorted_list[mid] < search_key:
            left = mid + 1
        elif sorted_list[mid] > search_key:
            right = mid - 1
        else:
            return mid
    return -1

# Sequential Search
def sequential_search(search_key, search_list):
    """
    Sequential Search Algorithm
    ------------------------------------------------
    search_list  : Array or list to be sorted
    search_key : Holds the item to search for
    index     : Specifies the index of array or list
    ------------------------------------------------
    Time Complexity  :
    Average-case & Worst-cast -> O(n)
    ------------------------------------------------
    """
    index = 0
    
    while index < len(search_list):
        if search_key == search_list[index]:
            return index
        index += 1
    return -1