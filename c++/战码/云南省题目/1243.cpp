#include<bits/stdc++.h>
using namespace std;
void hnt(int n,char a,char b,char c){
	if(n==1) cout<<a<<"->"<<c<<"\n";
	else{
		hnt(n-1,a,c,b);
		cout<<a<<"->"<<c<<"\n";
		hnt(n-1,b,a,c);
	}
}
int main(){
	freopen("1243.out","w",stdout);
	int n;
	cin>>n;
	hnt(n,'A','B','C');
	return 0;
}