class Solution {
public:
    int findMin(vector<int> &nums) {
        
        /*int n=nums.size();
        int l=0;
        int r=n-1;
        int mini=INT_MAX;
        
        while(l<=r){
            if(nums[l]<=nums[r]){
                mini=min(mini,nums[l]);
                r--;
            }
            if(nums[r]<nums[l]){
                mini=min(mini,nums[r]);
                l++;
            }

        }
        */

        sort(nums.begin(),nums.end());
        int mini=nums[0];

        return mini;
    }
};
