#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,minN;
    bool flag=false;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n;
        if(minN>n||!flag){
            minN=n;
            flag=true;
        }
    }
    cout<<minN;
    return 0;
}