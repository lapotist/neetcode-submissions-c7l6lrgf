class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefixes = {}
        suffixes = {}
        res = []
        for i in range(len(nums)):
            prefixes[i] = nums[i] * prefixes.get(i-1, 1)
            suffixes[i] = nums[len(nums)-i-1] * suffixes.get(i-1, 1)
        for i in range(len(nums)):
            res.append(prefixes.get(i-1, 1) * suffixes.get(len(nums)-2-i, 1))
        return res