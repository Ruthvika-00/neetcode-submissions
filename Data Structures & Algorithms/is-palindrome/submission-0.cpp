class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(char &c:s){
            if(isalnum(c)) str.push_back(tolower(c));
        }
        string s1 = str;
        reverse(s1.begin(),s1.end());
        return (s1.compare(str)==0);
    }
};
