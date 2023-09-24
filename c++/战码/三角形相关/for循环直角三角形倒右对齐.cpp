#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=n;j>0;j--)
    {
        for(int i=1;i<=n-j;i++){//每一行的空格
            cout<<" ";
        }
        for(int i=1;i<=j;i++){
            cout<<"*";//每一行的“*”
        }
        cout<<endl;
    }
    return 0;
}