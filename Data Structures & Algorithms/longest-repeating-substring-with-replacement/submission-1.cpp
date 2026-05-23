class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int r=0;
        int l=0;
        int max_len=0;
        int maxf=0;

        int n=s.size();

        vector<int> hash(26,0);

        while(r<n){
            hash[s[r]-'A']++;
            maxf=max(maxf,hash[s[r]-'A']);
            while(((r-l+1)-maxf)>k){
                hash[s[l]-'A']--;
                l++;
            }
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};
