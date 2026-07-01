class Solution {
public:
    string counter(string s){
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
                continue;
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while (!st.empty()) {
                ans += st.top();
                st.pop();
            }

        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        string s1=counter(s);
        string t1=counter(t);
        if(s1.size()!=t1.size())return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=t1[i])return false;
        }
        return true;
    }
};