#include<bits/stdc++.h>
using namespace std;
int a[35];
int ans=0;
int n,k,sum;
void dfs(int s,int cnt,int pos){
    if(pos>n) return;
    if(cnt>k||s>sum) return;
    if(cnt==k&&s==sum) {ans++;return;}
    dfs(s+a[pos],cnt+1,pos+1);
    dfs(s,cnt,pos+1);
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>k>>sum;
    for(int i=0;i<n;i++) cin>>a[i];
    dfs(0,0,0);
    cout<<ans;
    return 0;
}