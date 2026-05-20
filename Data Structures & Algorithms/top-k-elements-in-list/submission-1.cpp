class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(auto it:nums){
            mpp[it]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
