class Solution {
public:
    bool dfs(int u,vector<vector<int>> & g, vector<int>&c){
        c[u]=1;
        for(int v : g[u]){
            if(c[v]==1) return true;
            if(c[v]==0 && dfs(v,g,c)) return true;
        }
        c[u]=2;
        return false; 
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int> c(n,0);
        vector<vector<int>> g(n);
        for(auto& e: prerequisites){
            g[e[0]].push_back(e[1]);
        }
        for(int i=0;i<n;i++){
            if(c[i]==0 && dfs(i,g,c)) return false;
        }
        return true;
    }
};
