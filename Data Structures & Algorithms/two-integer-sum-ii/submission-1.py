class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp={}
        for i in range(len(numbers)):
            t = target-numbers[i]
            if t in mp:
                return [mp[t],i+1]
            mp[numbers[i]]=i+1
        return [-1,-1]