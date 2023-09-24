#include<iostream>
using namespace std;
int a,fish[105],ans=0;
int main(){
    cin>>a;
    if(a==0) cout<<"0";
    for(int i=0;i<a;i++){
        cin>>fish[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            if(fish[j]<fish[i]) ans++;
        }
        cout<<ans<<" ";
        ans=0;
    }
    
    return 0;
}