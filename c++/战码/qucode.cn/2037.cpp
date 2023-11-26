#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
			a[i][j]+=max(a[i-1][j-1],a[i-1][j]);
		}	
	}
    int ans=0;
	for(int i=1;i<=n;i++) ans=max(ans,a[n][i]);
    cout<<ans;
    return 0;
}