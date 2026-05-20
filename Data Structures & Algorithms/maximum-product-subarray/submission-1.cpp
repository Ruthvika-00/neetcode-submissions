class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int mx=1,mn=1;
        for(int i=0;i<nums.size();i++){
            int c=mx*nums[i];
            int d=mn*nums[i];
            mx=max(nums[i],max(c,d));
            mn=min(nums[i],min(c,d));
            res=max(mx,res);
        }
        return res;
    }
};
