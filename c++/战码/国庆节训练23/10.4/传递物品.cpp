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
    for(int i=0;i<n;i++) dp[1<<i][i]=0;
    for(int i=0;i<(1<<n);i++){//枚举拿到球的集合，即枚举子集
        for(int j=0;j<n;j++){//球从第j个人传出去，给k
            if(i&(1<<j)){//第j个人有没有球
                for(int k=0;k<n;k++){//球传给第k个人
                    if(!(i&(1<<k))){//第k个人没有拿到球，才能把球传给他
                        dp[i|(1<<k)][k]=min(dp[i|(1<<k)][k],dp[i][j]+g[j][k]);/*
                        第k个人拿到球，最后球在第k个人手上的方案，取最小值
*/                  }
                }
            }
        }
    }
    int ans=0x7f7f7f7f;
    for(int j=0;j<n;j++){
        ans=min(ans,dp[(1<<n)-1][j]);
    }    
    cout<<ans;
    return 0;
}
