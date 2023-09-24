#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int a;
    double z,q;
    cin>>a;
    z=a/1.2;
    q=50+a/3.0;
    if(z<q)
        cout<<"Walk";
    if(z>q)
        cout<<"Bike";
    if(z==q)
        cout<<"All";
    return 0;
}