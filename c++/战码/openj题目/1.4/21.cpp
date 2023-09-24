#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    if(y>=0)
    {
    if(y<=n*x)
        cout<<n-ceil(y/(float)x);
    }
    else
    {
        cout<<"0";
    }
    else
    {
        cout<<n;
    }
    return 0;
}