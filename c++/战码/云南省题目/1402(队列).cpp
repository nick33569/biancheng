#include<bits/stdc++.h>
using namespace std;
long long m,n,k,fm,fn,rm,rn;
int a[2020],b[2020];
int main(){
	cin>>m>>n>>k;//输入
	fm=fn=rm=rn=1;//初始化
	for(int i=1;i<=m;i++) a[rm++]=i;
	for(int i=1;i<=n;i++) b[rn++]=i;//入队
	for(int i=0;i<k;i++){
		cout<<a[fm]<<" "<<b[fn]<<endl;//输出
		a[rm++]=a[fm];
		b[rn++]=b[fn];//入队
		fm++;fn++;//出队
	}
	return 0;
}



/*QUEUE队列
#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
int m,n,k;
queue<int> a,b;
int main(){
	cin>>m>>n>>k;
	for(int i=1;i<=m;i++) a.push(i);
	for(int i=1;i<=n;i++) b.push(i);
	for(int i=0;i<k;i++){
		printf("%d %d\n",a.front(),b.front());
		a.push(a.front()),a.pop();
		b.push(b.front()),b.pop();
	}
	return 0;
}
*/