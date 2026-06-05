class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        

        double med=0;
        vector<int> ans;

        for(auto i:nums1){
            ans.push_back(i);
        }
        for(auto j:nums2){
            ans.push_back(j);
        }

        sort(ans.begin(),ans.end());
        
        int n=ans.size();

        int mid=n/2;
        
        if(n%2==0){
            med=(ans[mid]+ans[mid-1])/2.0;
        }
        else{
            med=ans[mid];
        }

        return med;

    }
};
