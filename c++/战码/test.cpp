#include<bits/stdc++.h>
using namespace std;
char a[85],b[85];
int main() {
	gets(a);
	gets(b);
	int l=strlen(a);
	for(int i=0;i<l;i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(b[i]>='A'&&b[i]<='Z') b[i]+=32;
	}
	int t=strcmp(a,b);
	if(t>0) cout<<">";
	else if(t==0) cout<<"=";
	else cout<<"<";
	return 0;
}

