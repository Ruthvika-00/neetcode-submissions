class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        tot=1
        zero_cnt=nums.count(0)
        if zero_cnt>1:
            return [0]*len(nums)
        for n in nums:
            if n!=0:
                tot*=n
        res=[]
        for n in nums:
            if zero_cnt==1:
                res.append(tot if n==0 else 0)
            else:
                res.append(tot//n)
        return res