class Solution {
public:
    vector<vector<int>> res;
    void bt(int i,vector<int>& nums,int t,int s,vector<int> curr){
        if(s==t){
            res.push_back(curr);
            return;
        }
        for(int a=i;a<nums.size();a++){
            if(s+nums[a]>t) return;
            curr.push_back(nums[a]);
            bt(a,nums,t,s+nums[a],curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        bt(0,nums,target,0,{});
        return res;
    }
};
