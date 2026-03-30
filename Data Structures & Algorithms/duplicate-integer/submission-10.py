class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        new_dict = dict()
        for i in range(len(nums)):
            if nums[i] in new_dict:
                return True
            else:
                new_dict.update({nums[i]: nums[i]})
        return False

        
        