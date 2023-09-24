#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int day=0,k=1,n=0,ans=0;
    cin>>n;
    while(day<=n){
        day+=k;
        if(day>n){
            ans+=k*(k-(day-n));
            break;
        }
        else ans+=k*k;
        k++;
    }
    cout<<ans;
    return 0;
}
