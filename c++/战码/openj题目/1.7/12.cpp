//再也不想见到wa 再见到我当场退钱 
#include<bits/stdc++.h>
using namespace std;
int l;

int main(){
	string s;
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]>='A'&&s[i]<='W') s[i]+=3;
		else if(s[i]=='X') s[i]='A';
		else if(s[i]=='Y') s[i]='B';
		else if(s[i]=='Z') s[i]='C';
		else{
			if(s[i]>='a'&&s[i]<='w') s[i]+=3;
			else if(s[i]=='x') s[i]='a';
			else if(s[i]=='y') s[i]='b';
			else if(s[i]=='z') s[i]='c';
		}
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
		else if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	while(l--){
		cout<<s[l];
	}
	return 0;
}