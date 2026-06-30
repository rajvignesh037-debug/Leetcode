class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>spiral(n,vector<int>(n,0));
        int top=0,left=0;
        int right=n-1,bottom=n-1;
        int  ans=1;
        while(top<=bottom&&left<=right){
             for(int i=left;i<=right;i++){
                spiral[top][i]=ans++;
             }
             top++;
             for(int i=top;i<=bottom;i++){
                spiral[i][right]=ans++;
             }
             right--;
             if(left<=right){
                for(int j=right;j>=left;j--){
                    spiral[bottom][j]=ans++;
                }
                bottom--;
                }
             if(top<=bottom){
                for(int j=bottom;j>=top;j--){
                    spiral[j][left]=ans++;
                }
                left++; 
             }
                
        }
        return spiral;
    }
};