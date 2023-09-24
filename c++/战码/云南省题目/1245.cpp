#include<bits/stdc++.h>
using namespace std;
int n,x,p[16];
bool flag=true;
void npow(int n){
	int i;
	while(n){
		for(i=x;i>=0;i--){
			if(p[i]<=n){
				n=n-p[i];
				if(flag) flag=false;
				else cout<<"+";
				if(i>1){
					cout<<"2(";
					flag=true;
					npow(i);
					cout<<")";
					break;
				}
				if(i==1) cout<<"2";
				if(i==0) cout<<"2(0)";
			}
		}
	}
}
int main(){
	cin>>n;
	p[0]=1;
	while(p[x]<n){
		x++;
		p[x]=p[x-1]*2;
	}
	npow(n);
	return 0;
}