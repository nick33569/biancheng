#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int a[105][105];
int dp[105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	fill(dp+2,dp+n+1,INF);//按类型空间赋初值
	/*
	memset(a,INF,sizeof(a));
	此函数是按字节赋值
	*/
	dp[1]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=0) dp[j]=min(dp[j],dp[i]+a[i][j]);
		}
	}
	cout<<dp[n];
    return 0;
}