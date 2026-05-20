class Solution {
public:
    int rob(vector<int>& nums) {
        int pt=0, pnt=0;
        int ct=0, cnt=0;
        for(int i=0;i<nums.size();i++){
            ct = nums[i]+pnt;
            cnt = max(pt,pnt);

            pt=ct;
            pnt=cnt;
        }
        return max(ct,cnt);
    }
};
