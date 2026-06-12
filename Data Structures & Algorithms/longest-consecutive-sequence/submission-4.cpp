class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1) return n;
        sort(nums.begin(),nums.end());
        
        int cnt=1;
        int mx=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1) {
                cnt++;
                mx=max(cnt,mx);
            }else cnt=1;
        }
        return mx;
    }
};
