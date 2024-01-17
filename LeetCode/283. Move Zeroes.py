def moveZeroes(arr):
   length = len(arr)  
   j = 0
   
   for current in range(length):
      if arr[current] != 0:
         arr[j] = arr[current]
         j = j + 1

   for current in range(j, length):
      arr[current] = 0
   return arr

nums = [0,1,0,3,12]
# nums = [0]
# nums = [0, 0, 0, 34, 23, 0]
result = moveZeroes(nums)
print(result)

