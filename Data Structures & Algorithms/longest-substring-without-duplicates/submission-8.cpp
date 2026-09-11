class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i=0, j=0;
        unordered_map<int,int> mp;
        int res=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                i=max(i,mp[s[j]]+1);
            }
            mp[s[j]]=j;
            res= max(res, j-i+1);
            j++;
        }
        return  res;
    }
};
