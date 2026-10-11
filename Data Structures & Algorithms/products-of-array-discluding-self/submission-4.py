class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        pf=1
        res=[1]*n
        for i in range(n):
            res[i]=pf 
            pf*=nums[i]
            
        sf=1       
        for i in range(n-1,-1,-1):
            res[i]*=sf
            sf*=nums[i]
            
        return res

        