#include<stack>//栈的头文件
#include<iostream>
#include<cstdio>
using namespace std;
stack<int> stk;//栈
int a;//输入的数字
char b;//输入的符号
int main(){
	// freopen("money.in","r",stdin);
	// freopen("CON","w",stdout);
	scanf("%d",&a);
	stk.push(a);//先把第一个数字存储进栈
	while(cin>>b){//输入b，直到什么都不输入结束循环
		scanf("%d",&a);//先输入a
		switch(b){
			case '+':
				stk.push(a);
				break;
				//如果是加号，就直接先入栈
			case '*':
				a=(a*stk.top())%10000;
				stk.pop();
				stk.push(a);
				break;
				//如果是乘号，先把栈顶和a相乘，再出栈，再入栈
		}
	}
	a=0;//现在a存在的意义就是存储答案(bushi)
	while(!stk.empty()){//判断是否栈空
		a=(stk.top()+a)%10000;//栈顶加a
		stk.pop();//这时候栈顶就没有存在的意义了，直接删掉
	}
	printf("%d\n",a);//最后输出答案
	return 0;
}