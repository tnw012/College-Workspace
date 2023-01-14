# Function that handles the divide and conquer of Quick Sort via recursion.
def sort(array_to_sort, low, high):
    if len(array_to_sort) == 1:
        return
    
    if low < high:
        pivot = __partition(array_to_sort, low, high)
        sort(array_to_sort, low, pivot - 1)
        sort(array_to_sort, pivot + 1, high)

# Function that creates a pivot and swapping indexes.
def __partition(array, low, high):
    pivot = array[high]
    index_pointer = low

    # Loop size of the array checking the index to pivot.
    for index in range(low, high):
        if array[index] <= pivot:
            array[index], array[index_pointer] = array[index_pointer], array[index]
            index_pointer += 1

    # Swap index pointer with the last index in array.
    array[index_pointer], array[high] = array[high], array[index_pointer]
    return index_pointer