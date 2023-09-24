#include<bits/stdc++.h>
using namespace std;

bool h[105];
int a[200][200],q[105];
int main(){
	int n,f,r;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<1;
	f=r=1;
	q[r]=1,h[1]=true;
	r++;
	while(f<=r){
		int u=q[f];
		for(int i=1;i<=n;i++){
			if(a[u][i]&&!h[i]){
				cout<<"-"<<i;
				q[r++]=i;
				h[i]=true;
			}
		}
		f++;
	}
	return 0;
}