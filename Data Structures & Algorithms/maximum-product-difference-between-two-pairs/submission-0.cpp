class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int a=nums[0];
        int b=nums[1];

        int n=nums.size();

        int c=nums[n-1];
        int d=nums[n-2];

        int maxi=(c*d)-(a*b);

        return maxi;
    }
};