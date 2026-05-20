class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int w =0;
        while(l<=r){
            int cw=min(heights[l],heights[r])*(r-l);
            w = max(w,cw);
            if(heights[l]<=heights[r]) l++;
            else r--;
        }

        return w;
    }
};
