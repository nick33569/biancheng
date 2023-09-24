警告：请不要妄图执行这个程序，否则后果很严重
数据结构之——栈 (stack)     stk 栈    top 栈顶    栈的维护就是靠栈顶   结构体  struct

1. 初始化
void clear(){
	top=0;//就是把栈顶设置为0
}

2. 判断是否为空
bool empty(){
	if(top==0) return false;
	else return true;
}

3. 求栈中元素个数
int size(){
	return top;//栈顶所在位置就是元素个数
}

4. 进栈（压栈）
void push(int x){
	stk[++top]=x;
} 

5. 出栈（弹栈）
void pop(){
	top--;//因为栈是先入后出，所以栈顶相减
}

6. 获取栈顶元素
int get_top(){
	return stk[top];
}