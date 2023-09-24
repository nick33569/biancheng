#include<bits/stdc++.h>
using namespace std;
long long m,n,k,indm=1,indw=1;

int main(){
	cin>>m>>n;
	long long a[m+5],b[1005];
	for(int i=1;i<m+5;i++) {
		a[i]=i;
		a[m+1]=0;
	}
	for(int i=1;i<=n;i++) {
		b[i]=i;
		b[n+1]=0;
	}//数组初始化
	cin>>k;
	for(int i=1;i<=k;i++){
		if(a[indm]==0){
			indm=1;
		}
		if(b[indw]==0){
			indw=1;
		}
		cout<<a[indm]<<" "<<b[indw]<<"\n";
		indm++;indw++;
	}
	return 0;
}