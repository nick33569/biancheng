#include<bits/stdc++.h>
using namespace std;
long long n,q,a[1000010][5],b[1000010][5],x=0,l,r,ans=0;
int main(){
	freopen("stack1.in","r",stdin);
	freopen("CON","w",stdout);
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i][1]);
	}
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i][2]);
	}//输入
	for(int i=1;i<=q;i++){
		memset(b,0,sizeof(b));
		ans=0,x=0;
		cin>>l>>r;
		for(int j=1;l<=r;l++){
			for(;;){

				if((a[l][1]!=b[j][1])&&(a[l][2]<b[j][2])) break;
				if(b[j][1]==0&&b[j][2]==0) break;
				j++;
			}

			if(b[j][1]==0&&b[j][2]==0){
				b[j][1]=a[l][1];
				b[j][2]=a[l][2];
			}

			else{
				b[j+1][1]=a[l][1];
				b[j+1][2]=a[l][2];
			}

			if((b[j][1]!=0&&b[j][2]!=0)&&(b[j+1][1]==0&&b[j+1][2]==0)) ans++;
			
		}
		cout<<ans<<endl;
	}
	return 0;
}