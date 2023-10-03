#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
string s;
int ans=0;
int n,m;
bool r[1005],c[1005];
void dfs(int x,int y){
    a[x][y]=0;
    if(!r[x]){
        r[x]=1;
        for(int i=0;i<m;i++) if(!c[i]&&a[x][i]==1) dfs(x,i);
    }
    if(!c[y]){
        c[y]=1;
        for(int i=0;i<n;i++) if(!r[i]&&a[i][y]==1) dfs(i,y);  
    }
}

int main(){
    freopen("bomb.in","r",stdin);
    freopen("bomb.out","w",stdout);
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++) a[i][j]=s[j]-'0';
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}