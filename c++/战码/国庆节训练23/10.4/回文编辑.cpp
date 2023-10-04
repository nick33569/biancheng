#include<bits/stdc++.h>
using namespace std;
int dp[1<<20];
int n;
string s;
bool hw(int f){
    string str="";
    for(int i=0;i<n;i++){
        if(f&(1<<i)){
            str+=s[i];
        }
    }
    string tstr=str;
    reverse(tstr.begin(),tstr.end());//数组倒置
    if(str==tstr) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n;
    cin>>s;
    memset(dp,0x3f,sizeof(dp));
    for(int i=0;i<(1<<n);i++){
        if(hw(i)){
            dp[i]=1;continue;
        }
        for(int j=i;j;j=i&(j-1)){
            if((i&j)==j){
                dp[i]=min(dp[i],dp[j]+dp[i^j]);
            }
        }
    }
    cout<<dp[(1<<n)-1];
    return 0;
}
