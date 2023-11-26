#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int a[105][105];
int dp[105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++) cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
	dp[1]=a[1][1];
	for(int i=1;i<=n;i++){
		for(int j=1;i<=j;j++){
			dp[i]=max(dp[i],dp[i]+(max(a[i+1][j],a[i+1][j+1])));
			cout<<dp[i]<<endl;
		}
	}
	cout<<dp[n];
    return 0;
}