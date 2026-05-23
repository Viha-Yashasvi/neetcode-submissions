class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> count(128,0);

        int left=0;
        int max_len=0;

        for(int right=0;right<s.length();right++){
            count[s[right]]++;

            while(count[s[right]]>1){
                count[s[left]]--;
                left++;
            }
            int curr_window_ind=right-left+1;
            max_len=max(max_len,curr_window_ind);
        }
        return max_len;
    }
};