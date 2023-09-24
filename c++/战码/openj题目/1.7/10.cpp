#include<bits/stdc++.h>
using namespace std;

string s;
int l;

int main(){
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]>='F'&&s[i]<='Z') s[i]-=5;
		else if(s[i]=='A') s[i]='V';
		else if(s[i]=='B') s[i]='W';
		else if(s[i]=='C') s[i]='X';
		else if(s[i]=='D') s[i]='Y';
		else if(s[i]=='E') s[i]='Z';
		cout<<s[i];
	}
	return 0;
}