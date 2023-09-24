#include<iostream>
#include<cstdio>
using namespace std;
void getNum(int n){
    int flag=1;
    do{
        if(flag==1&&n%10==0){
            n/=10;
        }
        else{
            flag=0;
            cout<<n%10;
            n/=10;
        }
    }while(n!=0);

}
int main(void){
    int n;
    cin>>n;
    if(n<0){
        cout<<'-';
        n=-n;
    }else if(n==0){
        cout<<0;
        return 0;
    }
    getNum(n);
    return 0;
}