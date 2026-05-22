class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perm = {{}};
        for(int num : nums){
            vector<vector<int>> new_perm;
            for(const auto& p:perm){
                for(int i=0;i<=p.size();i++){
                    vector<int> p_copy = p;
                    p_copy.insert(p_copy.begin()+i,num);
                    new_perm.push_back(p_copy);
                }
            }
            perm = new_perm;
        }
        return perm;
    }
};
