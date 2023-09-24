#include<iostream>
#include<cstdio>
using namespace std;
bool pr(int n){
	if(n%4==0&&n%100!=0||n%400==0) return 1;
	else return 0;
}
int main(){
	int x,y,sum=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++) if(pr(i)) sum++;
	cout<<sum;
    return 0;
}
