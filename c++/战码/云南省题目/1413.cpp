#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
stack<char> stk;
string s;
int main(){
	getline(cin,s);
	int n=s.size();
	for(int i=0;i<n;i++){
		switch(s[i]){
			case ']':
				if(stk.empty()){
					cout<<"Wrong";return 0;
				}
				if(stk.top()=='[') stk.pop();
				else{
					cout<<"Wrong";return 0;
				}
				break;
			case ')':
				if(stk.empty()){
					cout<<"Wrong";return 0;
				}
				if(stk.top()=='(') stk.pop();
				else{
					cout<<"Wrong";return 0;
				}
				break;
			default:
				stk.push(s[i]);
		}
	}
	if(stk.empty()) cout<<"OK";
	else cout<<"Wrong";
	return 0;
}