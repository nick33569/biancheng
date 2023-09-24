#include<bits/stdc++.h>
using namespace std;
int jc(int n){
	if(n==1) return 1;
	return n*jc(n-1);
}
int main(){
	freopen("jc.in","r",stdin);
	freopen("jc.out","w",stdout);
	int n;
	cin>>n;
	cout<<jc(n);
	return 0;
}
