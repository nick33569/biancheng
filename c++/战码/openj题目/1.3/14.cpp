#include<cstdio>
#include<cmath>
int main()
{
    int h, r, t;
    double v,Pi=3.14159;
    scanf("%d%d",&h,&r);
    v=Pi * r * r * h/1000;
    t=(ceil(20/v));
    printf("%d",t);
    return 0;
}