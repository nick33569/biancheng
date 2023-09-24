#include<bits/stdc++.h>
using namespace std;
char a[105],b[105];
int main(){
	//获取单个字符
	a[i]=getchar();
	scanf("%c",&a[i]);
	cin>>a[i];
	//获取单词
	scanf("%s",a);
	cin>>a;
	//获取整行
	gets(a);
	//按字符输出
	putchar(a[i]);
	printf("%c",&a[i]);
	cout<<a[i];
	//按单词输出
	cout<<a;
	printf("%s",a);
	//输出整个数组
	puts(a);
	//获取数组长度
	sizeof(a);//获取a在内存空间申请的空间大小
	strlen(a);//获取a中字符串的长度
	//比较a与b数组的大小
	strcmp(a,b);//头文件：<cstring>源自<string.h>
	return 0;
}