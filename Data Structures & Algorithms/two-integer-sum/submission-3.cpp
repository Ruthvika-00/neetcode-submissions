class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int r=target-nums[i];
            if(mp.find(r)!=mp.end()){
                return {mp[r],i};
            }else{
                mp[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};
