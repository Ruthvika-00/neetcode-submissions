class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int h = n-1, l = 0, i = 0;
        while(i<=h){
            if(nums[i]==0) {
                swap(nums[i],nums[l]);
                l++;
                i++;
            }
            else if(nums[i]==1){
                i++;
            }else{
                swap(nums[h],nums[i]);
                h--;
            }
        }
    }
};