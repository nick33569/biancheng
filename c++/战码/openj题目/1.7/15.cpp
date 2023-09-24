//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<bits/stdc++.h>
using namespace std;
int l,t;
int main(){
	string s;
	cin>>t;
	for(int p=0;p<t;p++){
		s.clear();
		cin>>s;
		l=s.size();
		if(s[0]>='a'&&s[0]<='z') s[0]-=32;
		cout<<s[0];
		for(int i=1;i<l;i++){
			if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
			cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}