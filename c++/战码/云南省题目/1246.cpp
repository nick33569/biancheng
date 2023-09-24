#include<bits/stdc++.h>
using namespace std;
struct student{//结构体的定义 
	string name,gender;//数据类型 名称 
	int year,month;//同上 
}; 
bool cmp(student a,student b){
	if(a.year==b.year) return a.month>b.month;
	return a.year>b.year;
}
int main(){
	student s[105];//定义变量 
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].name>>s[i].gender>>s[i].year>>s[i].month;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++){
		cout<<s[i].name<<" "<<s[i].gender<<" "<<s[i].year<<" "<<s[i].month<<endl;
	}
	return 0;
}

