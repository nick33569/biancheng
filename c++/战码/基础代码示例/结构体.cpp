#include<iostream>
using namespace std;
struct student{//结构体的定义
 string name,gender;//数据类型 名称
 int year,month;//同上
}; 

int main(){
	student s;//定义变量
	cin>>s.name>>s.gender>>s.year>>s.month;
	cout<<s.name<<s.gender<<s.year<<s.month;
	return 0;
}

