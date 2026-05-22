class Solution {
public:
    bool isPalindrome(string s) {
        
        string new_one="";
        
        for(char c:s){
            if(isalnum(c)){
                new_one+=tolower(c);
            }
        }

        int low=0;
        int high=new_one.length()-1;


        while(low<=high){
            if(new_one[low]!=new_one[high]){
                return false;
            }
            low++;
            high--;
        }

        return true;
    }
};
