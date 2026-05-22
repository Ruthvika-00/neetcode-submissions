class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        sort(nums.begin(),nums.end());
        int m = 1;
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1){
                cnt++;
                m = max(m,cnt);
            }else{
                cnt = 1;
            }
        }
        return max(m,cnt);
    }
};
