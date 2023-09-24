#include<iostream>
#include<cstdio>
using namespace std;
int main(void){//基础设置
    int n,a1,a2,b1,b2,c1,c2,a=0,b=0,c=0,z=0;
    //n表示铅笔数量，a1-c1表示每个包装内铅笔的数量，
    //a2-c2表示每个包装的价格，
    //a-c表示最终的价格，z表示最终结果
    cin>>n;//输入铅笔数量
    cin>>a1>>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;//输入各三种包装
    for(int i=1;a/n<=0;i++){
        a+=a1;
    }
    a=a/a1;//第一种包装判断：一共要买多几包
    a=a*a2;//第一种包装价格
    for(int i=1;b/n<=0;i++){
        b+=b1;
    }//同上
    b=b/b1;
    b=b*b2;
    for(int i=1;c/n<=0;i++){
        c+=c1;
    }//同上
    c=c/c1;
    c=c*c2;
    if(a<b&&a<c)z=a;//取最省钱的方案，赋值给z
    if(b<a&&b<c)z=b;
    if(c<b&&c<a)z=c;
    cout<<z;//输出最少的钱
    return 0;//养成好习惯
}