//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<bits/stdc++.h>
using namespace std;
int ls,lt;
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
	if(s.compare(t)==1) cout<<">";
	else if(s.compare(t)==-1) cout<<"<";
	else cout<<"=";
	return 0;
}