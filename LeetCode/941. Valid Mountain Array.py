def valid_mountain_array(arr):
    i = 0
    j = len(arr) - 1

    if (j + 1) < 3:
        return False

    while (i < j) and (arr[i] < arr[i+1]):
        i = i + 1

    while arr[j] < arr[j - 1]:
        j = j - 1

    if i == j and i != 0 and j != len(arr)-1:
        return True
    return False

arr = [0,3,2,1]
# arr = [3, 5, 5]
result = valid_mountain_array(arr)
print(result)
