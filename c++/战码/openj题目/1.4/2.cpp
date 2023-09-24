#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    if(n>=0){
        printf("%.2f",n);

    }
    if(n<0){
        n=-n;
        printf("%.2f",n);
    }
    return 0;
}
