def firstBadVersion(arr, n):
    left = 1
    right = n
    mid = 0

    if n == 1:
        return 1


    while left != right:
        mid = int(math.floor((left + right) / 2))
        if isBadVersion(mid):
            right = mid
        else:
            left = mid + 1
    return left
