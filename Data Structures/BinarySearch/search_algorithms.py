def binary_search(sKey, sList):
    left = 0
    right = len(sList) - 1
    while left <= right:
        mid = (left + right) // 2
        if sList[mid] < sKey:
            left = mid + 1
        elif sList[mid] > sKey:
            right = mid - 1
        else:
            return mid
    return -1
