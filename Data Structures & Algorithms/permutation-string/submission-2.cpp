class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s2.size();
        int m=s1.size();
        if(m>n) return false;
        vector<int> c1(26,0);
        vector<int> c2(26,0);
        for(int i=0;i<m;i++){
            c1[s1[i]-'a']++;
            c2[s2[i]-'a']++;
        }
        if (c1==c2) return true;
        for(int i=m;i<n;i++){
            c2[s2[i]-'a']++;
            c2[s2[i-m]-'a']--;

            if (c1==c2) return true;
        }
        return false;
    }
};
