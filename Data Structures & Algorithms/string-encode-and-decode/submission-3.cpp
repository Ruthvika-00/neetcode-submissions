class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(string s : strs){
            str += to_string(s.size()) + '#' + s;
        }
        return str;
    }

    vector<string> decode(string s) {
        int i =0;
        vector<string> res;
        while(i<s.size()){
            int j =i;
            while(s[j]!='#'){
                j++;
            }
            int n = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,n);
            res.push_back(str);
            i = j+n+1;
        }
        return res;
    }
};
