class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;

        for(auto token:tokens){
            int result=0;
            int a=0;
            int b=0;
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                b=st.top();
                st.pop();
                a=st.top();
                st.pop();
                if(token=="+"){
                    result=a+b;
                }
                else if(token=="-"){
                    result=a-b;
                }
                else if(token=="*"){
                    result=a*b;
                }
                else if(token=="/"){
                    result=a/b;
                }
                st.push(result);
            }
            else{
                int kp=stoi(token);
                st.push(kp);
            }
        }
        int ele=0;
        ele=st.top();
        return ele;
    }
};
