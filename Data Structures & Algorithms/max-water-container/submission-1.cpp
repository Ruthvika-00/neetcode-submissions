class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int w =0;
        while(l<=r){
            w = max(w,min(heights[l],heights[r])*(r-l));
            if(heights[l]<=heights[r]) l++;
            else r--;
        }

        return w;
    }
};
