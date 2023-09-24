#include<iostream>
using namespace std;
int main(){
    int n,a,sum=0;
    cin>>n;
    sum=(n-2)*180;
    for(int i=0;i<n-1;i++){
    cin>>a;
    sum-=a;
    }
    cout<<sum;
    return 0;
}