class Solution {
public:

    string encode(vector<string>& strs) {

        string ans="";
        for(string s:strs){
            ans+=to_string(s.length())+"#"+s;
        }

        return ans;
    }

    vector<string> decode(string s) {

        vector<string> ans;
        int i=0;

        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            i=j+1;
            string strs=s.substr(i,length);
            ans.push_back(strs);
            i+=length;
        }
        return ans;
    }
};
