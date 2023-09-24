#include<bits/stdc++.h>
using namespace std;
string s;
int l,ans=0;
int main(){
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		if(s[i]<=57&&s[i]>=48) ans++;
	}
	cout<<ans;
	return 0;
}