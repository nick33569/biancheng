#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0,aa=0,bb=0,cc=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        aa+=a;
        bb+=b;
        cc+=c;
    }
    cout<<aa<<" "<<bb<<" "<<cc<<" "<<aa+bb+cc;
    return 0;
}