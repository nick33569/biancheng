#include<bits/stdc++.h>
using namespace std;
char stk[105];
string s;
int top=0,l,i=0;
int main(){
	getline(cin,s);
	l=s.size();
	while(i<l){
		switch(s[i]){
			case '#':
				top--;
				break;
			case '@':
				top=0;
				break;
			default:
				stk[++top]=s[i];
		}
		i++;
	}
	for(i=1;i<=top;i++) cout<<stk[i];
	return 0;
}