class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int l=0, h=n-1;
        while(l<h){
            int s=numbers[l]+numbers[h];
            if(s==target) return {l+1,h+1};
            else if(s<target) l++;
            else h--;
        }
        return {-1,-1};
    }
};
