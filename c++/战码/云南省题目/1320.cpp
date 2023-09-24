#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
int a[105][105];
bool flag[105];
int n,k=0;
stack<int> stk;
int main(){
	memset(flag,true,sizeof(flag));
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	cout<<1;
	stk.push(1);
	flag[1]=false;
	while(!stk.empty()){
		k++;
		if(k>n){
			k=stk.top();
			stk.pop();
		}
		else if(flag[k]&&a[stk.top()][k]){
			cout<<"-"<<k;
			stk.push(k);
			flag[k]=false;
			k=0;
		}
	}
	return 0;
}