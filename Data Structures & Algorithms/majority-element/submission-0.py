class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums_dict = {}
        for num in nums:
            nums_dict[num] = nums_dict.get(num, 0) + 1
            if nums_dict[num] > len(nums)/2:
                return num
        
        