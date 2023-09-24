#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s=8;
    char w;
    cin>>k>>w;
    if(k>1000)
    if((k-1000)%500!=0)
        s=s+((k-1000)/500+1)*4;
    else
        s=s+(k-1000)/500*4;
    if(w=='y') s+=5;
        printf("%d\n",s);
    return 0;
}