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
    int minMeetingRooms(vector<Interval>& intervals) {
        
        vector<int> starts;
        vector<int> ends;

        for(auto it:intervals){
            starts.push_back(it.start);
            ends.push_back(it.end);
        }

        sort(starts.begin(),starts.end());
        sort(ends.begin(),ends.end());

        int rooms_needed=0;
        int max_rooms=0;
        int end_ptr=0;

        for(int i=0;i<starts.size();i++){
            if(starts[i]<ends[end_ptr]){
                rooms_needed++;
            }
            else{
                end_ptr++;
            }
            max_rooms=max(max_rooms,rooms_needed);
        }

        return max_rooms;
    }
};
