class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> zr{};
        set<int> zc{};
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    zr.insert(i);
                    zc.insert(j);
                }
            }
        }
        for(int i : zr){
            for(int j=0;j<m;j++){
                matrix[i][j]=0;
            }
        }
        for(int j : zc){
            for(int i=0;i<n;i++){
                matrix[i][j]=0;
            }
        }
    }
};
