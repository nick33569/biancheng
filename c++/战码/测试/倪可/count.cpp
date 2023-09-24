#include<bits/stdc++.h>
using namespace std;
int a[1000010]={0},b[100010][10],n,x,ans=0;

int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	for(int i=1;i<=n;i++){
		b[i][1]=a[i]%10;
		b[i][2]=(a[i]%100-a[i]%10)/10;
		b[i][3]=(a[i]%1000-a[i]%100)/100;
		b[i][4]=(a[i]%10000-a[i]%1000)/1000;
		b[i][5]=(a[i]%100000-a[i]%10000)/10000;
		b[i][6]=(a[i]%1000000-a[i]%100000)/100000;
		b[i][7]=(a[i]%10000000-a[i]%1000000)/1000000;
		b[i][8]=(a[i]%100000000-a[i]%10000000)/10000000;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=8;j++) if(b[i][j]==x) ans++;
	}
	cout<<ans;
	return 0;
}
