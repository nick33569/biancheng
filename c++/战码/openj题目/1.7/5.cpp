#include<bits/stdc++.h>
using namespace std;
string a,b;
int l;
int main(){
	getline(cin,a);
	l=a.size();
	for(int i=0;i<l-1;i++){
		b+=a[i]+a[i+1];
	}
	b+=a[l-1]+a[0];
	for(int i=0;i<l;i++) cout<<b[i];
	return 0;
}