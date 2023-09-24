#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double a,y;
    cin>>a;
    if(0<=a&&a<5)
        y=-a+2.5;
    else if(5<=a&&a<10)
        y=2-1.5*(a-3)*(a-3);
    else if(10<=a&&a<20)
        y=a/2-1.5;
    printf("%.3f",y);
    return 0;
}