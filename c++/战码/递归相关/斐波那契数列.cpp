#include<iostream>
#include<cstdio>
using namespace std;
long long fb(long long n){
	if(n==1||n==2) return 1;
	else return fb(n-1)+fb(n-2);
}
int main(){
	long long n;
	cin>>n;
	cout<<fb(n);
    return 0;
}
