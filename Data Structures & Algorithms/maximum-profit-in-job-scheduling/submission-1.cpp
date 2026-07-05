class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n=startTime.size();
        vector<vector<int>> jobs;
        for(int i=0;i<n;i++){
            jobs.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        vector<int> starts;
        for(auto &j : jobs){
            starts.push_back(j[0]);
        }
        vector<int> dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int nxt= lower_bound(
                starts.begin(),
                starts.end(),
                jobs[i][1]
            )-starts.begin();
            int take=jobs[i][2]+dp[nxt];
            int skip=dp[i+1];
            dp[i]=max(take,skip);
        }
        return dp[0];

    }
};