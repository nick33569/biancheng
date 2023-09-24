#include<cstdio>
#include<iostream>
using namespace std;
int main(void){
    int a,b,maxN=0,day=0;
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        if(a+b>8&&a+b>maxN){
            maxN=a+b;
            day=i;
        }
    }
    cout<<day<<endl;
    return 0;
}