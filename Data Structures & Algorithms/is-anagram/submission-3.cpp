class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> m1, m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto i:s){
            if(m1[i]!=m2[i]) return false;
        }
        return true;
    }
};
