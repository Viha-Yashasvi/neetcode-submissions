class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int low=0;
        int high=heights.size()-1;

        int max_water=0;

        while(low<high){
            int width=high-low;
            int curr_ht=min(heights[low],heights[high]);
            int current_water=width*curr_ht;

            max_water=max(max_water,current_water);

            if(heights[low]<heights[high]){
                low++;
            }
            else{
                high--;
            }
        }

        return max_water;
    }
};
