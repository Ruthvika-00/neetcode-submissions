class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c1=0,c2=0;
        int e1=-1,e2=-1;
        for(int n:nums){
            if(n==e1) c1++;
            else if(n==e2) c2++;
            else if(c1==0) {
                e1=n;
                c1++;
            }
            else if(c2==0){
                e2=n;
                c2++;
            } 
            else{
                c1--;
                c2--;
            }
        }
        
        c1=c2=0;
        for(int n: nums){
            if(n==e1) c1++;
            else if(n==e2) c2++;
        }

        vector<int> res;
        if(c1>n/3) res.push_back(e1);
        if(c2>n/3) res.push_back(e2);
        return res;
    }
};