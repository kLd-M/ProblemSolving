class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        
        sum = 0

        for num in nums:
            sum += num
        
        return (len(nums) * (len(nums)+1))//2 - sum