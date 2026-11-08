class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        int n=temperature.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperature[i]>temperature[st.top()]){
                int prevIndex=st.top();
                st.pop();
                ans[prevIndex]= i- prevIndex;
            }
            st.push(i);

        }
        return ans;
    }
};