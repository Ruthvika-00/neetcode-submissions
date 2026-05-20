class Solution {
public:
    bool dfs(int i, int p, vector<vector<int>>& g, vector<int> &v){
        v[i] = 1;
        for(int c : g[i]){
            if(!v[c]==1) {
                if(dfs(c,i,g,v)) return true;
            } 
            else if(c!=p) return true;
        }
        
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<int> v(n,0);
        vector<vector<int>> g(n);
        for(auto &e : edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        if(dfs(0,-1,g,v)) return false;
        for(int i=0;i<n;i++){
            if(v[i]==0) return false;
        }
        return true;
    }
};
