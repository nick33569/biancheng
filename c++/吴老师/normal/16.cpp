#include<iostream>
#include<cstring>
using namespace std;
struct jgt
{
    int a,b;
    int z[100];
    jgt()
    {
        a=0;
        b=0;
        memset(z,0,sizeof(z));
    }
    int sum()
    {
        return a+b;
    }
}a,b;

int main(){
    cin>>a.a>>a.b>>b.a>>b.b;
    cout<<a.sum()<<"  "<<b.sum();
    return 0;
}