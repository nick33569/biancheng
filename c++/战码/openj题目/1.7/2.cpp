#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int t[300]={0},l=0;
char c,s[100005];
int main(){//way1
	//freopen("2.in","r",stdin);
	while((c=getchar())!=EOF){
		s[l++]=c;
		t[c]++;
	}
	for(int i=0;i<l;i++){
		if(t[s[i]]==1){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}


/*way2

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string s;
int t[300]={0},l;
char c;
int main(){
	//freopen("2.in","r",stdin);
	getline(cin,s);
	l=s.size();
	for(int i=0;i<l;i++){
		t[s[i]]++;
	}
	for(int i=0;i<l;i++){
		if(t[s[i]]==1){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}


way3

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int t[300]={0},l=0;
char c,s[100005];
int main(){
	//freopen("2.in","r",stdin);
	while(cin>>c){
		s[l++]=c;
		t[c]++;
	}
	for(int i=0;i<l;i++){
		if(t[s[i]]==1){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
*/