#include<iostream>
using namespace std;
int a[15];
int main(){
    int h,ans=0;
    for(int i=0;i<10;i++) cin>>a[i];
    cin>>h;
    for(int i=0;i<10;i++){
        if(h+30>=a[i]) ans++;
    }
    cout<<ans;
    return 0;
}