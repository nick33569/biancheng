#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    double a1,a2,b1,b2,a,b,c;
    cin>>a1>>a2>>b1>>b2;
    a=abs(a1-b1);
    b=abs(a2-b2);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("%.3lf",c);
    return 0;
}