class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> seen;

        while(true){
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            if(sum==1) return true;
            if(seen.count(sum)) return false;

            seen.insert(sum);
            n=sum;
        }
    }
};
