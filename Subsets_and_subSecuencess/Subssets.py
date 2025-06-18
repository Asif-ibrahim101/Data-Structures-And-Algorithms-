def Solve(nums, subsets, ans, index):
    #base case
    if (index >= len(nums)):
        #push the subsets into the ans
        ans.append(subsets.copy())  # Create a copy of the subset
        return
    

    #exclude
    Solve(nums, subsets, ans, index + 1)

    #include
    element = nums[index]
    subsets.append(element)
    Solve(nums, subsets, ans, index + 1)
    subsets.pop()  # Remove the element after the recursive call

def Subsets(nums):
    answer = []
    subsets = []
    index = 0

    Solve(nums, subsets, answer, index)
    answer.sort()
    return answer

nums = [1,2,3]
print(Subsets(nums))