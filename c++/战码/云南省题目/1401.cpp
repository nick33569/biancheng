#include<bits/stdc++.h>
using namespace std;
long long n,k,m,p,b,f,r,xm=0,card[1100010],a[50010];
int main(){
	cin>>n>>k>>p;
	for(int i=1;i<=k;i++){
		card[i]=i;
	}
	f=1;r=k+1;
	for(int i=1;i<=k/n;i++){
		for(int j=1;j<=n;j++){
			if(j==n) a[xm++]=card[f];
			f++;
			for(int x=0;x<p;x++){
				card[r++]=card[f++];
			}
		}
	}
	sort(a,a+xm);
	for(int i=0;i<xm;i++) cout<<a[i]<<endl;
	return 0;
}