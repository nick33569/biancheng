#include<iostream>
using namespace std;
struct student{//�ṹ��Ķ���
 string name,gender;//�������� ����
 int year,month;//ͬ��
}; 

int main(){
	student s;//�������
	cin>>s.name>>s.gender>>s.year>>s.month;
	cout<<s.name<<s.gender<<s.year<<s.month;
	return 0;
}

