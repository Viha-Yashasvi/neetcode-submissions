class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans;
        

        for(int i=0;i<nums.size();i++){
            int product=1;
            int j=0;
            while(j<nums.size()){
                if(i!=j){
                    product*=nums[j];
                }
                j++;
            }
            ans.push_back(product);
        }

        return ans;
    }
};
