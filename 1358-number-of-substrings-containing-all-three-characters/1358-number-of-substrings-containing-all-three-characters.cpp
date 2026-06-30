class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0;
        vector<int>freq(3,0);
        int count=0;
        int temp=0;
        for(int r=0;r<n;r++){
            freq[s[r]-'a']++;
            while(freq[0]&&freq[1]&&freq[2]){
                temp++;
                freq[s[l]-'a']--;
                l++;
            }
            count+=temp;

        }
        return count;
        
    }
};