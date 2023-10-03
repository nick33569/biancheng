#include<bits/stdc++.h>
using namespace std;
int h[105][105];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int n,m,ans;
int dp[105][105];
int dfs(int x,int y){
    if(x<0||x>=n||y<0||y>=m) return 0;
    if(dp[x][y]) return dp[x][y];
    int mx=0;
    for(int i=0;i<4;i++){
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(h[tx][ty]<h[x][y]) mx=max(mx,dfs(tx,ty));
    }
    return dp[x][y]=mx+1;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>h[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) ans=max(ans,dfs(i,j));
    cout<<ans;
	return 0;
}
