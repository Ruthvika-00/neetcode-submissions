class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        vector<vector<string>> res;
        int i=0;
        for(string s: strs){
            string st=s;
            sort(st.begin(),st.end());
            if(mp.find(st)!=mp.end()) res[mp[st]].push_back(s);
            else{
                res.push_back({s});
                mp[st]=i;
                i++;
            }
        }
        return res;
    }
};
