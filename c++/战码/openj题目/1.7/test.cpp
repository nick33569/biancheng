#include<bits/stdc++.h>
using namespace std;
string a,b,c;
char d[30]={0},word[30]={0};
int l;

int main(){
	cin>>a>>b>>c;
	l=a.size();
	for(int i=0;i<l;i++){
		if(d[a[i]-65]==0||d[a[i]-65]==b[i]) d[a[i]-65]=b[i];
		else{
			printf("Failed");return 0;
		}
	}

	for(int i=0;i<l;i++){
		word[b[i]-65]++;
	}
	for(int i=0;i<26;i++){
		if(word[i]==0){
			printf("Failed");return 0;
		}
	}
	l=c.size();
	for(int i=0;i<l;i++){
		cout<<d[c[i]-65];
	}
	return 0;

}