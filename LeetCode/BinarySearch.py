def binarySearch(arr, target):
    left = 0
    right = len(arr) - 1
    
    while(left <= right):
        mid = int((left + right) / 2)

        if(target == arr[mid]):
            return mid
        elif(target < arr[mid]):
            right = mid - 1
        else:
            left = mid + 1
    return -1




arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19]
target = 4
result = binarySearch(arr, target)
if result != -1:
    print(result)
else:
    print('Element not found')
