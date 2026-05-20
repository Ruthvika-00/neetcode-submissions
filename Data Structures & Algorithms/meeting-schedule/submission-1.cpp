/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &x,auto &y){
            if(x.start==y.start) return x.end < y.end;
            return x.start < y.start;
        });
        int endTime = intervals[0].end;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start < endTime) return false;
            else endTime = intervals[i].end;
        }
        return true;
    }
};
