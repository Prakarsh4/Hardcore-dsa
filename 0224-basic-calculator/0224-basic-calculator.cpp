class Solution {
public:
    int calculate(string s) {
        long long result=0;
        long sign=1;
        long long num=0;
        stack<int> st;
        for(int i=0;i<s.length();i++){
            char ch= s[i];

        if (isdigit(ch)){
            num=num*10+(ch-'0');
        }
        else if(ch=='+'){
            result+=sign*num;
            num=0;
            sign=1;
        }
        else if(ch=='-'){
            result+=sign*num;
            num=0;
            sign=-1;
        }
        else if(ch=='('){
            st.push(result);
            st.push(sign);
            result=0;
            sign=1;
            num=0;
        }
        else if(ch==')'){
            result+=sign*num;
            num=0;
            long long previousign= st.top();
            st.pop();
            long long previousresult=st.top();
            st.pop();
            result= previousresult+previousign*result;
        }

    }
    result+= sign*num;
    return result;
    }
    
};