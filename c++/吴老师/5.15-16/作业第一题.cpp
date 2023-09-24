#include<iostream>
using namespace std;
int wrong()
{
	cout<<"程序结束"<<endl;
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
	cout<<"请输入m的值：";
	cin>>m;
	cout<<"请输入n的值：";
	cin>>n;
	cout<<"输出值为"<<akm(m,n)<<endl;
	system("pause");
	return 0;
}
