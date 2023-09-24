#include<bits/stdc++.h>
using namespace std;
struct hg{
	int t,g;//时间和国籍
}p[300005];
int b[100005];/*24小时内有几个对应国籍的人
即 b[i]表示 24小时内国籍为i的人数
*/
int n,sj,k,f,r,ans; /*
	船数 乘客 队尾
	  时间 队首 答案
	  我在windows11用time和tm都撞关键字了 所以只能用sj了
*/
int main(){
	cin>>n;//输入船数
	for(int i=1;i<=n;i++){//船数循环
		scanf("%d %d",&sj,&k);//时间（秒）以及乘客数
		for(;k>0;k--){//每个乘客的输入
			p[++r].t=sj;//存储每个人的时间
			scanf("%d",&p[r].g);//丢进队列
			if(b[p[r].g]==0) ans++;//新的国籍的人
			b[p[r].g]++;//存储国籍的人
		}
		while(sj-p[f].t>=86400){//判断是否超过24小时
			b[p[f].g]--;//该船国籍人数自减
			if(b[p[f].g]==0) ans--;//这个国籍的人没了，答案减1
			f++;//队首自加，舍弃本船，判断下一艘船
		}
		printf("%d\n",ans);//输出答案
	}
	return 0;
}
/*
笑死，竟然有20个测试点，我一瞬间就被吓到了
一开始在洛谷上做，结果还wa，后来发现是没用scanf超时了
我瞬间被自己折服.....
*/