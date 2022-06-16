# Function that handles the divide and conquer of Merge Sort via recursion.
def sort(array_to_sort, low, high):
    if low < high:
        mid = (low + high) // 2
        sort(array_to_sort, low, mid)
        sort(array_to_sort, mid + 1, high)
        __merge(array_to_sort, low, mid, high)

# Function that merges the array back into one sorted array.
def __merge(array_to_sort, low, mid, high):
    buffer_array = [None] * len(array_to_sort)
    first_sub_array_index = low
    second_sub_array_index = mid + 1

    # Loop from 0 to the size of the array sorting each element
    for index in range(low, high + 1):
        if first_sub_array_index > mid:
            buffer_array[index] = array_to_sort[second_sub_array_index]
            second_sub_array_index += 1
        elif second_sub_array_index > high:
            buffer_array[index] = array_to_sort[first_sub_array_index]
            first_sub_array_index += 1
        elif array_to_sort[first_sub_array_index] < array_to_sort[second_sub_array_index]:
            buffer_array[index] = array_to_sort[first_sub_array_index]
            first_sub_array_index += 1
        else:
            buffer_array[index] = array_to_sort[second_sub_array_index]
            second_sub_array_index += 1

    # Loop from the 0 to the size of the array replacing each element in the original array
    for index in range(low, high + 1):
        array_to_sort[index] = buffer_array[index]