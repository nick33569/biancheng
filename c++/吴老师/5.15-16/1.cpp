#include<iostream>
using namespace std;
int fun(int a)
{
	if(a==1) return 1;
	return a+fun(a-1);
}
int main(){
	int n;
	cin>>n;
	fun(n);
	return 0;
}
