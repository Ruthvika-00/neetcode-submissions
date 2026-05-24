class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> cnt(26,0);
        for(char c : tasks){
            cnt[c-'A']++;
        }
        sort(cnt.begin(),cnt.end());
        int maxf = cnt[25];
        int idle = (maxf-1)*n;
        for(int i=24;i>=0;i--){
            idle -= min(maxf-1,cnt[i]);
        }
        if(idle>0) return tasks.size()+idle;
        else return tasks.size();
    }
};
