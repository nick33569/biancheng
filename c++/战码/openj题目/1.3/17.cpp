#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
float xd(double a1,double a2,double b1,double b2){//求线段长度
    double a=abs(a1-b1);
    double b=abs(a2-b2);
    double c=sqrt(pow(a,2)+pow(b,2));
    return c;
}
int main(){
    float a1,a2,b1,b2,c1,c2,a,b,c,p,s;
    cin>>a1>>a2;
    cin>>b1>>b2;
    cin>>c1>>c2;
    a=xd(a1,a2,b1,b2);
    b=xd(a1,a2,c1,c2);
    c=xd(b1,b2,c1,c2);
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f",s);
    return 0;
}