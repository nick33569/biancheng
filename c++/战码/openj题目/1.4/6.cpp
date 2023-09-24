#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=10){
        if(a<100) cout<<1;
        else cout<<0;
    }
    else cout<<0;
    return 0;
}