class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = prices[0], m=0;
        for(int i:prices){
            b=min(b,i);
            m=max(m,i-b);
        }
        return m;
    }
};
