class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lo=0, hi=nums.size();
        return nums[lo+(hi-lo)/2];
    }
};