#include<bits/stdc++.h>
using namespace std;

string s;
int l;
int main(){
	getline(cin,s);
	l=s.size();
	bool flag=1;
	for(int i=0; i<l; i++) {
		if(s[0]>='0'&&s[0]<='9') {
			cout << "no" << endl;
			flag=0;
			break;
		}
		if(!( (s[i]>='0'&&s[i]<='9') || (s[i]>='A'&&s[i]<='Z') 
			|| (s[i]>='a'&&s[i]<='z') || s[i]=='_') ) {
			cout << "no" << endl;
			flag=0;
			break;
		}
	}
	if(flag==1) {
		cout << "yes" << endl;
	}
	return 0;
}