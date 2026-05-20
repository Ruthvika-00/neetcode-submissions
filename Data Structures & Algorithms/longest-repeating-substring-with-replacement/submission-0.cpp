class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0, m=0, mf=0;
        unordered_map<char,int> mp;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            mf=max(mf,mp[s[j]]);
            if(((j-i+1)-mf)>k){
                mp[s[i]]--;
                i++;
            }
            m=max(m,j-i+1);
        }
        
        return m;
    }
};
