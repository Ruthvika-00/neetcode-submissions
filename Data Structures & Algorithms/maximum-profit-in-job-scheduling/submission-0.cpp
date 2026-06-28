class Solution {
public:
    vector<vector<int>> intervals;
    vector<int> cache;
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        intervals.resize(n, vector<int>(3));
        cache.assign(n, -1);

        for (int i = 0; i < n; i++) {
            intervals[i] = {startTime[i], endTime[i], profit[i]};
        }
        sort(intervals.begin(), intervals.end());

        return dfs(0); 
        
    }
private:
    int dfs(int i) {
        if (i == intervals.size()) {
            return 0;
        }
        if (cache[i] != -1) {
            return cache[i];
        }

        int res = dfs(i + 1);

        int left = i + 1, right = intervals.size(), j = intervals.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (intervals[mid][0] >= intervals[i][1]) {
                j = mid;
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return cache[i] = max(res, intervals[i][2] + dfs(j));
    }
};