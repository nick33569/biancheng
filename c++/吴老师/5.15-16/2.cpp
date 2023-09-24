#include<iostream>
using namespace std;
int shu(int n)
{
	cout<<n%10;
	if(n>10) return shu(n/10);
	
}




int main()
{
	int n;
	cin>>n;
	int a=1;
	while(n>=1)
	{
	
	if(n%2==1) a=a*10+1;
	if(n%2==0) a=a*10;
	n/=2;
	}	
	shu(a); 
	return 0;
}
