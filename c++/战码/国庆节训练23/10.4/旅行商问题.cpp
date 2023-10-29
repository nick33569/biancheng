#include<bits/stdc++.h>
using namespace std;
int dp[1<<16][20];
int g[20][20];
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>g[i][j];
    }
    memset(dp,0x3f,sizeof(dp));
    dp[1][0]=0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                for(int k=0;k<n;k++){
                    if(j!=k&&(i&(1<<k))){
                        dp[i][j]=min(dp[i][j],dp[i^(1<<j)][k]+g[k][j]);
                    }
                }
            }
        }
    }
    int ans=1145141919;
    for(int j=0;j<n;j++){
        ans=min(ans,dp[(1<<n)-1][j]+g[j][0]);
    }    
    cout<<ans;
    return 0;
}
