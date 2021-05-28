def MaxSum(array):
    max_end = max_result = array[0]
    for i in array[1:]:
        max_end = max(i,max_end+i)
        max_result = max(max_result,max_end)
    
    print(max_result)

a = [1, 2, 3, 4, -10]
MaxSum(a)