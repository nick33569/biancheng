#include<iostream>
using namespace std;
int main(){
    int a,b,minN=1001;
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>b;
        if(minN>b){
            minN=b;
        }
        else continue;
    }
    cout<<minN;
    return 0;
}