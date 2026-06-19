class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int  n=gain.size();
        int highest=0;
        int temp=0;
        for(int i=0;i<n;i++){
            temp+=gain[i];
            highest=max(temp,highest);
        }
        return highest;
    }
};