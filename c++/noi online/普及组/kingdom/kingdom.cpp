#include<bits/stdc++.h>
using namespace std;
int n,m,a[1010][1010],ans=0,x=0,y=0;
int main(){
	freopen("kingdom.in","r",stdin);
	freopen("CON","w",stdout);
	scanf("%d %d",&n,&m);
	if(n==0) return 0;//作死不怕死的结果
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=1;j<=n;j++){
		scanf("%d",&a[m+1][j]);
	}
	for(int i=1;i<=n;i++){
		x=0;y=0;
		for(int j=1;j<=m;j++){
			if(a[j][i]==a[m+1][i]) x++;
			else y++;
		}
		if(x>y) ans++;
	}
	cout<<ans;
	return 0;
}