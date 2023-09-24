#include<iostream>
using namespace std;
int main(){
    char n;
    cin>>n;
    int a=int(n);
    if(a%2==0){
        cout<<"NO";
    }
    if(a%2==1){
        cout<<"YES";
    }
    return 0;
}
