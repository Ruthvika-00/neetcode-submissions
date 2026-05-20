class Solution {
public:
    void dfs(int i, vector<vector<int>>& g,unordered_set<int>& seen){
        seen.insert(i);
        for(int u :g[i]){
            if(!seen.count(u)) dfs(u,g,seen); 
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1) return false;
        vector<int> v(n,0);
        vector<vector<int>> g(n);
        for(auto &e : edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        unordered_set<int> seen;
        dfs(0,g,seen);
        return (seen.size()==n);
    }
};
