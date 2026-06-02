class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows,{1});
        for(int r=1;r<numRows;r++){
            for(int i=1;i<=r;i++){
                if(i==r) res[r].push_back(1);
                else res[r].push_back(res[r-1][i-1]+res[r-1][i]);
            }
        }
        return res;

    }
};