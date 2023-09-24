#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,x,maxx = -1,minx=999;
    cin>>n;
    while(i<=n)
    {
        cin>>x;
        if (x>maxx)
            maxx=x;
        i++;
        if (x<minx)
            minx=x;
    }
    cout<<maxx-minx;
    return 0;
}