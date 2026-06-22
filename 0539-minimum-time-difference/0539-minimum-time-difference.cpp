class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        int n=timePoints.size();
        int ans=1439;
        for(int i=1;i<n;i++){
                int hours1 = stoi(timePoints[i-1].substr(0, 2));
                int mins1 = stoi(timePoints[i-1].substr(3, 2));
                int totalMinutes1 = hours1* 60 + mins1;
                int hours2 = stoi(timePoints[i].substr(0, 2));
                int mins2 = stoi(timePoints[i].substr(3, 2));
                int totalMinutes2 = hours2* 60 + mins2;                
                ans=min(ans,totalMinutes2-totalMinutes1);
        }
        int hours = stoi(timePoints[n-1].substr(0, 2));
        int mins = stoi(timePoints[n-1].substr(3, 2));
        int totalMinutes= hours* 60 + mins;
        int hours3 = stoi(timePoints[0].substr(0, 2));
        int mins3= stoi(timePoints[0].substr(3, 2));
        int totalMinutes3 = hours3* 60 + mins3;       
        return min(ans,1440-totalMinutes+totalMinutes3);
    }
};