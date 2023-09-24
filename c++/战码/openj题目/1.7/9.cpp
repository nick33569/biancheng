#include<bits/stdc++.h>
using namespace std;

string s;
int l;

int main(){
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		if((s[i]>='A'&&s[i]<='Y')||(s[i]>='a'&&s[i]<='y')) s[i]++;
		else if(s[i]=='Z') s[i]='A';
		else if(s[i]=='z') s[i]='a';
		cout<<s[i];
	}
	return 0;
}