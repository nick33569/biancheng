#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int tk[32767],m,n,ti,dj;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>tk[i];
    }
    for(int i=n+1;i<=m+n;i++){
        cin>>tk[i];
    }
    sort(tk+1,tk+1+m+n);
    for(int i=1;i<=m+n;i++) cout<<tk[i]<<" ";
    return 0;
}