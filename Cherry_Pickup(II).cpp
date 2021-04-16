class Solution {
public:
    int dp[80][80][80];
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return fun(grid,0,0,grid[0].size()-1);
    }
    int fun(vector<vector<int>>&grid,int i,int j1,int j2){
        if(i==grid.size()){
            return 0; 
        }
        if(j1<0||j2<0||j1>=grid[0].size()||j2>=grid[0].size()){
            return INT_MIN;
        }
        if(dp[i][j1][j2]!=-1){
            return dp[i][j1][j2];
        }
        int ans=INT_MIN;
        int cur=grid[i][j1]+grid[i][j2];
        if(j1==j2){
            cur-=grid[i][j1];
        }
        ans=max(ans,cur+fun(grid,i+1,j1,j2));
        ans=max(ans,cur+fun(grid,i+1,j1+1,j2));
        ans=max(ans,cur+fun(grid,i+1,j1-1,j2));
        ans=max(ans,cur+fun(grid,i+1,j1,j2+1));
        ans=max(ans,cur+fun(grid,i+1,j1+1,j2+1));
        ans=max(ans,cur+fun(grid,i+1,j1-1,j2+1));
        ans=max(ans,cur+fun(grid,i+1,j1,j2-1));
        ans=max(ans,cur+fun(grid,i+1,j1+1,j2-1));
        ans=max(ans,cur+fun(grid,i+1,j1-1,j2-1));
        return dp[i][j1][j2]=ans;
    }
};
