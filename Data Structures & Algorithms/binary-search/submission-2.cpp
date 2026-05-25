class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if(nums.size()==1 && nums[0]==target){
            return 0;
        }
        int n=nums.size();

        int l=0;
        int r=n-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                r--;
            }
            if(nums[mid]<target){
                l++;
            }
            
            
        }
        return -1;
    }
};
