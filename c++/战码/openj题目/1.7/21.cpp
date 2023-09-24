//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string str,a,b;
int main(){
	getline(cin,str);
	cin>>a>>b;
	cout<<str.find(a);
	return 0;
}