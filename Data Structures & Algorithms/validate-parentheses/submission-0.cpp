class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> mp;
        mp['('] = ')';
        mp['['] = ']';
        mp['{'] = '}';

        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end()) {   // opening bracket
                st.push(s[i]);
            }

            else {   // closing bracket
                if (st.empty() || mp[st.top()] != s[i])
                    return false;

                st.pop();
            }
        }

        return st.empty(); 
    }
};
