class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0,b = prices[0],s = 0;
     
        for(int i : prices){
            if(i<b) b=i;
            else{
                int p = i-b;
                if(p>max) max=p;
            }
        }
        return max;

    }
};
