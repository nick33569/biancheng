#include<bits/stdc++.h>


int front,rear,q[114514];/*
	队首   队尾   队列(其实就是数组)
*/

//队列初始化
void clear(){
	front=rear=1;//或0
}
//判断是否为空
bool empty(){
	if(front==rear) return true;
	else return false
}
//求队列中元素的个数
int size(){
	return rear-front;
}
//入队
void push(int x){
	q[rear++]=x;
}
//出队
void pop(){
	front++;
}
//取队首元素
int get_front(){
	return q[front];
}



//高级操作方法

#include<queue>//队列的头文件

queue<int> q;//声明
//(main函数)
q.push(1);//push 入队
cout<<q.front()<<endl;
q.push(5);
q.push(8);
q.pop();//pop 出队
cout<<q.front()<<endl;
/*这段代码输出：
1             //第一次输入1，队首是1
5             //入队5、8后1出队，输出队首，即5
*/
//empty 判断队列是否为空，返回true为空，false为非空
if(q.empty()) cout<<"Null";  //如果队列为空，输出"Null"
if(!q.empty()) cout<<"not Null";  //如果队列不为空，输出"not Null"
//size 获取元素
cout<<q.size();
//back 获取队尾元素
cout<<q.back();

//示例：
if(q.empty()) cout<<"Null"<<endl;
q.push(1);
cout<<q.front()<<endl;
q.push(5);
q.push(8);
q.pop();
cout<<q.front()<<endl;
if(!q.empty()) cout<<"not Null"<<endl;
cout<<q.size()<<endl;
cout<<q.back<<endl;
/*输出结果：
Null
1
5
not Null
2
8
*/