class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, res=0,i=0;
        while(i<nums.size()){
            if(nums[i]==1){
                c++;
                res=max(res,c);
            }else{
                c=0;
            }
            i++;
        }
        return res;
    }
};