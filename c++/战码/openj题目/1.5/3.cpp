#include<stdio.h>
int main()
{
    int n;
    float m=0,a,z=0;
    scanf ("%d",&n);
    for(int i=0;i<n;i+=1){
        scanf("%f",&m);
        z=z+m;
    }
    printf("%.4f",z/n);
    return 0;
}