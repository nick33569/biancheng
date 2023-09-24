#include<iostream>
using namespace std;
int tree[10010];
int l,m,u,v,ans=0;
int main(){
    cin>>l>>m;
    for(int i=0;i<=l;i++) tree[i]=1;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        for(;u<=v;u++) tree[u]=0;
        u=0;v=0;
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==1) ans++;
    }
    cout<<ans;
    return 0;
}