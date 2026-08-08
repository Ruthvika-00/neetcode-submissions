class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int r=k%n;
        if(r==0) return;
        vector<int> res(n);
        for(int i=0;i<r;i++){
            res[i]=nums[n-r+i];
        }
        for(int i=r;i<n;i++){
            res[i]=nums[i-r];
        }
        for(int i=0;i<n;i++){
            nums[i]=res[i];
        }
    }
};