#include<iostream>
#include<cstdio>
using namespace std;
long long jc(long long n){
	if(n==1) return 1;
	else return n*jc(n-1);
}
int main(){
	long long n;
	cin>>n;
	cout<<jc(n);
    return 0;
}
