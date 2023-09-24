#include<iostream>
using namespace std;
int a[3];
int main(){
    int *p=a;
    for(int i=1;i<=3;i++) cin>>*(p+i);//输入
    for(int i=1;i<=3;i++) cout<<*(p+i)<<" ";//输出
    return 0;

}