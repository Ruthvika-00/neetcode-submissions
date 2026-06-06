class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0, cnt=0;
        for(int n:nums){
            if(cnt==0) res=n;
            cnt+= (n==res)? 1:-1;
        }
        return res;
    }
};