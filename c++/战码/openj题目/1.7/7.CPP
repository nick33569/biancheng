#include<bits/stdc++.h>
using namespace std;

string s;
int l;
char p(char a){
	if(a=='A') return 'T';
	if(a=='T') return 'A';
	if(a=='G') return 'C';
	if(a=='C') return 'G';
}

int main(){
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++) cout<<p(s[i]);
	return 0;
}