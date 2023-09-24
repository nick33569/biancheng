#include<iostream>
using namespace std;
int  a=0,num[110];
int main(){
    for(;;a++){
        cin>>num[a];
        if(num[a]==0) break;
    }
    for(int i=a-1;i>=0;i--){
        cout<<num[i]<<" ";
    }
    
    return 0;
}