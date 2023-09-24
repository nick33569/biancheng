#include<iostream>
using namespace std;
int main(void){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    if(d-b<0){
        d+=60;
        c--;
    }
    f=d-b;
    e=c-a;
    cout<<e<<" "<<f;
    return 0;
}