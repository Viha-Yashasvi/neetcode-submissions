class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> mpp;

        for(auto it:strs){
            string original=it;
            sort(original.begin(),original.end());
            mpp[original].push_back(it);
        } 
        
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
