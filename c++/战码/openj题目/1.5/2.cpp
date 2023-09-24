#include<iostream>
#include<cstdio>
//#include<windows.h>
using namespace std;
int main(){
    double a=0,b=0;
    for(int i=0;i<12;i++){
        cin>>a;
        b+=a;
    }
    printf("$%.2f",b/12);
    return 0;
}