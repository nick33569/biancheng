#include<bits/stdc++.h>
using namespace std;
string a,b;
int l,d=0;
double c,ans;
int main(){
	cin>>c>>a>>b;
	l=a.size();
	for(int i=0;i<l;i++){
		if(a[i]==b[i]) d++;
	}
	ans=(double)d/(double)l;
	if(ans>=c) cout<<"yes";
	else cout<<"no";
	return 0;
}