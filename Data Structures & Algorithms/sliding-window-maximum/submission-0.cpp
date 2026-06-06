class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        deque<int> dq; //stores indices, not values
        int n=nums.size();

        for(int i=0;i<n;i++){
            //remove indices out of this window
            if(!dq.empty() && dq.front()==i-k){
                dq.pop_front();
            }
            //maintain decresing order
            //remove all elements smaller than current
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i); //insert current index

            //starting from i>=k-1, window is valid to store ans
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};
