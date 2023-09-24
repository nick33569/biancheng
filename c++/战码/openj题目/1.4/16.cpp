#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&b-a<c&&a-c<b&&c-a<b&&b-c<a&&c-b<a) cout<<"yes";
    else cout<<"no";
    return 0;
}