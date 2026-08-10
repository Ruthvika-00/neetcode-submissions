class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        reverse(nums.begin(),nums.end());
        return nums;
    }
};