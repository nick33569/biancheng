#include<bits/stdc++.h>
using namespace std;
string s;
char a,b;
int l;
int main(){
	cin>>s;
	cin>>a>>b;
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]==a) s[i]=b;
	}
	for(int i=0;i<l;i++) cout<<s[i];
	return 0;
}