class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashmap ={}
        for i in range(0, len(nums)):
        	complement = target - nums[i]
        	if complement in hashmap:
        		return [hashmap[complement], i]
        	hashmap[nums[i]] = i
        return "no anwser found!"

my_test = Solution()
print(my_test.twoSum([2,7,11,15], 9))