//再也不想见到wa 再见到我当场退钱 
#include<bits/stdc++.h>
using namespace std;
int l;
int main(){
	string s;
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
		cout<<s[i];
	}
	return 0;
}
//这题目的顺序该改改了