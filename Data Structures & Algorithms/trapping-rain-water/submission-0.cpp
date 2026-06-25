class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> p(n);
        vector<int> s(n);
        int l=0, r=0;
        for(int i=0;i<n;i++){
            p[i]=l;
            s[n-i-1]=r;
            l=max(l,height[i]);
            r=max(r,height[n-i-1]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            int w=min(p[i],s[i])-height[i];
            if(w>0) res+=w;
        }
        return res;
    }
};
