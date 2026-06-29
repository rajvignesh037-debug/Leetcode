class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int count=0;
        for(int i=0;i<n;i++){
            string s=patterns[i];
            if(word.find(s)!=string::npos){
                count++;
            }
        }
        return count;
    }
};