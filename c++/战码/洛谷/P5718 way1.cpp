#include<iostream>
using namespace std;
int main(){
    int a,b,minN;
    cin>>a;
    cin>>b;
    minN=b;
    for(int i=1;i<a;i++){
        cin>>b;
        if(minN>b){
            minN=b;
        }
        else continue;
    }
    cout<<minN;
    return 0;
}