class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for (string s : strs){
            str += s + '\0';
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int j =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='\0'){
                strs.push_back(s.substr(j,i-j));
                j=i+1;
            }
        }
        return strs;
    }
};
