class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.empty()) return 0;

        int low=0;
        int high=height.size()-1;

        int total_water=0;

        int left_max=0;
        int right_max=0;


        while(low<high){

            if(height[low]<height[high]){
                if(height[low]>=left_max){
                    left_max=height[low];
                }
                else{
                    total_water+=left_max-height[low];
                }
                low++;
            }
            else{
                if(height[high]>right_max){
                    right_max=height[high];
                }
                else{
                    total_water+=right_max-height[high];
                }
                high--;

            }
            
            
            
        }
        return total_water;
    }
};
