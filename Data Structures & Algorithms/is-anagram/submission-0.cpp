class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;

        unordered_map<char,int> map1;
        

        for(auto it:s){
            map1[it]++;
        }
        for(auto it:t){
            map1[it]--;
        }

        for(auto pairs:map1){
            if(pairs.second!=0){
                return false;
            }
        }

        return true;

        


    }
};
