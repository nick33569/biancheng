#include<iostream>
using namespace std;
int main(void){
    int a;
    float b;
    cin>>a;
    if(a>10000) return 0;
    else if(a<=150) b=a*0.4463;
    else if(a>150&&a<=400) b=(a-150)*0.4663+66.945;
    else b=(a-400)*0.5663+116.575+66.945;
    printf("%.1f",b);
    return 0;
}