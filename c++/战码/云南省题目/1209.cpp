#include<iostream>
using namespace std;
int n,x,b,a[110]; 
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    b=a[n];
    cin>>x;
    for(int i=n-1;i>=x;i--) a[i+1]=a[i];
    a[x]=b;
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}