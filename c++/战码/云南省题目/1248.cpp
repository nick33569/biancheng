#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int height,xh;
	void input(){
		cin>>name>>height>>xh;
	}
	void output(){
		cout<<name<<" "<<height<<" "<<xh;
	}
};
bool cmp(student a,student b){
	if(a.height==b.height) return a.xh<b.xh;
	return a.height>b.height;
}
int n;
int main(){
	student s[105];
	cin>>n;
	for(int i=0;i<n;i++){
		s[i].input();
	}
	sort(s,s+n,cmp);
	s[0].output();
	return 0;
}