//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<bits/stdc++.h>
using namespace std;
int ls,lt,l,a1,a2;
int main(){
	string s,t;
	getline(cin,s);
	getline(cin,t);
	ls=s.size();
	lt=t.size();
	for(int i=0;i<ls;i++){
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	for(int i=0;i<lt;i++){
		if(t[i]>='a'&&t[i]<='z') t[i]-=32;
	}
	for(int i=0;i<ls;i++){
		if(s[i]!=' ') a1+=int(s[i]);
	}
	for(int i=0;i<lt;i++){
		if(t[i]!=' ') a2+=int(t[i]);
	}
	if(a1==a2) cout<<"YES";else cout<<"NO";
	return 0;
}