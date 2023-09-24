#include<iostream>
using namespace std;
int main(){
    int a,b;
    int *s=&a,*t=&b;
    cin>>a>>b;
    cout<<"a="<<*s<<" b="<<*t<<"\n";
    cout<<"s="<<*s+*t<<" t="<<*s**t<<"\n";
    return 0;
}