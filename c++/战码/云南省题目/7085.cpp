#include<bits/stdc++.h>
using namespace std;
struct fen{
	int xh,yw,ma,en,total;
};
int n;
fen f[305];
bool cmp(fen a,fen b){
	if(a.total==b.total){
		if(a.yw==b.yw) return a.xh<b.xh;
		return a.yw>b.yw;
	}
	return a.total>b.total;
}
int main(){
//	freopen("money.in","r",stdin);
//	freopen("CON","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		f[i].xh=i+1;
		cin>>f[i].yw>>f[i].ma>>f[i].en;
		f[i].total=f[i].yw+f[i].ma+f[i].en;
	}
	sort(f,f+n,cmp);
	for(int i=0;i<5;i++){
		cout<<f[i].xh<<" "<<f[i].total<<"\n";
	}
	return 0;
}
