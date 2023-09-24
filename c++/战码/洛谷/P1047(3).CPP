#include<iostream>
using namespace std;
int m,l,u,v,ans=0,tree[10010];
int main(){
    cin>>l>>m;
    for(int i=0;i<=l;i++){
        tree[i]=1;
    }
    for(int i=0;i<m;i++){
        cin>>u>>v;
        for(int j=u;j<=v;j++){
            tree[j]=0;
        }
    }
    for(int i=0;i<=l;i++){
        if(tree[i]==1) ans++; 
    }
    cout<<ans;
    return 0;
}