#include<iostream>
#include<cstdio>
using namespace std;
void a(int n){
    bool flag=true;
    do{
        if(flag==true&&n%10==0){
            n/=10;
        }else{
            flag=false;
            cout<<n%10;
            n/=10;
        }

    }while(n);
}
int main(void){
    int n;
    cin>>n;
    if(n<0){
        n=-n;
        cout<<"-";
    }
    else if(n==0){
        cout<<0;
        return 0;
    }
    a(n);
    return 0;
}