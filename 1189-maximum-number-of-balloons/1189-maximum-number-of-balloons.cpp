class Solution {
public:
    int maxNumberOfBalloons(string text) {
             unordered_map<char,int> mp = {
             {'b', 0},
             {'a', 0},
             {'l', 0},
             {'o', 0},
             {'n', 0}
                       };
            for(auto &ch:text){
                if(mp.find(ch)!=mp.end())mp[ch]++;
               
            }
            int count=INT_MAX;
            mp['l']=mp['l']/2;
            mp['o']=mp['o']/2;
            for(auto &p:mp){
                count=min(count,p.second);
            }
            return count;           
    }
};