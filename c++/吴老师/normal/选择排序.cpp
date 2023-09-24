#include<iostream>
using namespace std;
int a[10010];
void in(int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void pai(int n){
    int m1,m2,t;
    for(int i=0;i<n;i++){
        m1=a[i];
        m2=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<m1){
                m1=a[j];
                m2=j;
            }
        }
        t=a[m2];
        a[m2]=a[i];
        a[i]=t;
    }
}

void out(int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n=0;
    cin>>n;
    in(n);
    pai(n);
    out(n);
    return 0;
}