#include<bits/stdc++.h>
using namespace std;
struct student{//�ṹ��Ķ��� 
	string name,gender;//�������� ���� 
	int year,month;//ͬ�� 
}; 
bool cmp(student a,student b){
	if(a.year==b.year) return a.month>b.month;
	return a.year>b.year;
}
int main(){
	student s[105];//������� 
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

