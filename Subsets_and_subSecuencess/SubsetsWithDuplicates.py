def Solve(nums, subsets, ans, index):
    #pusing all subsets into the ans
    ans.append(subsets.copy())

    #checking the duplicates
    for i in range(index, len(nums)):
        #skip the duplicates if the current element is equal to the previous element
        if(i > index and nums[i] == nums[i - 1]):
            continue

        #include the element
        subsets.append(nums[i])
        Solve(nums, subsets, ans, i + 1)

        #remove the element after the recursive call
        subsets.pop()

def SubsetsWithDuplicates(nums):
    answer = []
    subsets = []
    index = 0

    #sort the nums
    nums.sort()
    Solve(nums, subsets, answer, index)
    return answer

nums = [1,2,2]
print(SubsetsWithDuplicates(nums))