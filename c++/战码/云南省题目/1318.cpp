#include<bits/stdc++.h>
using namespace std;
struct que{
	int b,s;
};
que q[105];//队列
bool flag[105];//标记
int a[105][105];//矩阵
int main(){
	int n,x,f,r,y,tmp;
	cin>>n>>x>>y;
	memset(flag,true,sizeof(flag));//初始化关系标签
	//存邻接矩阵
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	f=r=1;
	q[f].b=x;//找人的人先入队
	q[f].s=0;//第一个入队的人关系数为0
	flag[x]=false;
	while(f<=r){
		tmp=q[f].b;
		if(tmp==y){//如果已经找到y个人
			cout<<q[f].s-1<<endl;
			return 0;
		}
		for(int i=1;i<=n;i++){
			if(a[tmp][i]==1&&flag[i]){
				r++;
				q[r].b=i;
				q[r].s=q[f].s+1;
				flag[i]=false;
			}
		}
		f++;
	}
	cout<<"sth worng"<<endl;
	return 0;
}