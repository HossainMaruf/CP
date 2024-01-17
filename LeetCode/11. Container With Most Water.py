def mostWater(height):
    left = 0
    right = len(height) - 1
    area = -1
    while left != right:
        area = max([area, min([height[left], height[right]]) * (right-left)])
        if height[left] <= height[right]:
            left = left + 1
        else:
            right = right - 1

    return area

height = [1,8,6,2,5,4,8,3,7]
print(mostWater(height))
