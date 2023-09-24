#include<iostream>
using namespace std;
int a[110];
int main(){
    int b=0;
    for(int i=0;;i++){
        cin>>a[i];
        b++;
        if(a[i]==0) break;
    }
    b-=2;
    for(int i=b;i>=0;i--) cout<<a[i]<<" ";
    return 0;
}