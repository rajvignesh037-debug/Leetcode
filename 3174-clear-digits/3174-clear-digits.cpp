class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]>='0'&&s[i]<='9'){
                if(!st.empty()){
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};