class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i in range(len(nums)):
            r = target-nums[i]
            if r in mp:
                return [mp[r],i]
            else:
                mp[nums[i]]=i
        return [-1,-1]