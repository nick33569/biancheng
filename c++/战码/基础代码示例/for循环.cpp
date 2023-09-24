#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
    int n,i;
    cin>>i;
    cin>>n;
    for(int b=1;b<=i;b++){
        for(int a=1;a<=n;a++){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}