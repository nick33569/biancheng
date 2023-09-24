#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string a,b;
string kg(string c){
	string d;
	int l=c.size();
	int k;
	for(int i=0;i<l;i++){
		if(c[i]!=' ') {
			d[i]=c[i];
			k++;
		}
	}
}
int main(){
	getline(cin,a);
	getline(cin,b);
	a=kg(toupper(a));
	b=kg(toupper(b));
	int t=a.compare(b);
	if(t>0) cout<<">";
	else if(t==0) cout<<"=";
	else cout<<"<";

	return 0;
}