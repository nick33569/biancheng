#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10010],ans=0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) ans+=a[i];

    return 0;
}