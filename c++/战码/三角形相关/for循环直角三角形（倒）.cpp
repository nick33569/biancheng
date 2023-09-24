#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
    int a;
    cin>>a;
    for(int i=a;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}