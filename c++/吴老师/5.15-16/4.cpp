#include<iostream>
using namespace std;
int z[17]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void _jzzh(int a,int b)
{
	int yushu;
	yushu=a%b;
	if(a>=b) _jzzh(a/b,b);
	cout<<(char)z[yushu];
}
int main()
{
	int X,M;
	cout<<"请输入您需要转换的数：";
	cin>>X;
	cout<<"  "<<endl;
	cout<<"请输入您需要转换的进制（小于等于16）：";
	cin>>M;
	cout<<"  "<<endl;
	if(M>16||M<2)
	{
		cout<<"不符合规范，即将终止程序"<<endl;
		system("pause");
		return 0;
	}
	_jzzh(X,M);
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	system("pause");
	return 0;
}
