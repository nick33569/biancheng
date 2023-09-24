#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,s,b,n;
    cin>>n;
    g=n%10;
    s=n/10%10;
    b=n/100;
    cout<<g<<s<<b;
    return 0;
}