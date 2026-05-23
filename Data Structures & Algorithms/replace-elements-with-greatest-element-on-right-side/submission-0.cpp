class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n=arr.size();
        vector<int> ans;

        for(int i=0;i<n-1;i++){
            int max_int=arr[i+1];
            for(int j=i+1;j<n;j++){
                max_int=max(arr[j],max_int);
            }
            ans.push_back(max_int);
        }
        ans.push_back(-1);

        return ans;

    }
};