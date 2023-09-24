#include<iostream>
using namespace std;
int a[3];
int main(){
    int *p=a;
    cin>>a[1]>>a[2]>>a[3];
    cout<<*(p+1)<<" "<<*(p+2)<<" "<<*(p+3)<<"\n";
    return 0;

}