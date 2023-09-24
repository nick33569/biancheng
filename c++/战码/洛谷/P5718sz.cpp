#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=1;i<=a;i++) cin>>b[i];
    sort(b+1,b+1+a);
    cout<<b[1];
    return 0;
}