#include<iostream>
using namespace std;
int wrong()
{
	cout<<"�������"<<endl;
}
int akm(int m,int n)
{
	if(m<0||m>3||n<0||n>10)
	{
		wrong();
		return m,n;		
	}
	if(m==0) return n+1;
	if(m>0&&n==0) akm(m-1,1);
	if(m>0&&n>0) akm(m-1,akm(m,n-1));
}
int main()
{
	int m,n;
	cout<<"������m��ֵ��";
	cin>>m;
	cout<<"������n��ֵ��";
	cin>>n;
	cout<<"���ֵΪ"<<akm(m,n)<<endl;
	system("pause");
	return 0;
}
