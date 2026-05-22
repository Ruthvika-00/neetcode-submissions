class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int len = 0, longest = 0;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i]-1)==seen.end()){
                len = 0;
                int ele = nums[i];
                while(seen.find(ele)!=seen.end()){
                    len++;
                    ele++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
