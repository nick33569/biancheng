#include<iostream>
#include<cstdio>
using namespace std;
long long a[1000000];
long long fb(long long n){
	if(n==1||n==2) return 1;
	else{
		if(a[n]!=0) return a[n];
		else{
			a[n]=fb(n-1)+fb(n-2);
			return a[n];
		}
	}
}
int main(){
	long long n;
	cin>>n;
	cout<<fb(n);
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
    return 0;
}
