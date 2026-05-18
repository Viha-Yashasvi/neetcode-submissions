class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int it:nums){
            mpp[it]++;
        }
        for(auto const& [key, val] : mpp){
            if(val > 1){
                return true;
            }
        }
        return false;
    }
};