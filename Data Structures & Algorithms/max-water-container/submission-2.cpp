class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l=0, r=n-1;
        int res = 0;
        while(l<r){
            int a= min(heights[l],heights[r])*(r-l);
            res= max(res,a);
            if(heights[l]<=heights[r]) l++;
            else r--;
        }
        return res;
    }
};
