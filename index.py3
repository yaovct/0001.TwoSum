class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

    	for i in range(0, len(nums)-1):
    		for j in range(i+1, len(nums)):
    			if nums[i] + nums[j] == target:
    				return [i, j]
    	return "no anwser found!"

my_test = Solution()
print(my_test.twoSum([2,7,11,15], 9))