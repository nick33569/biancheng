#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,n,x,maxx = -1;
    cin>>n;
    while(i<=n)
    {
        cin>>x;
        if (x>maxx)
            maxx=x;
        i++;
    }
    cout<<maxx;
    return 0;
}