#include<iostream>
using namespace std;
int a[110];
int main(){
    int n,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        ans=0;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                ans++;
            }
        }
        cout<<ans<<" ";
    }
    return 0;
}