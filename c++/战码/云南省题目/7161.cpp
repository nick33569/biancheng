#include<iostream>
#include<cstdio>
using namespace std;
int a[45][45]={0},n,k=1,r,l;
void out() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    cin>>n;
    r=1;l=(n+1)/2;
    a[r][l]=k++;
    while(k<=n*n){
        if(r==1&&l!=n){
            r=n;l=l+1;
            a[r][l]=k++;
        }
        if(r!=1&&l==n){
            r=r-1;l=1;
            a[r][l]=k++;
        }
        if(r==1&&l==n){
            r=r+1;
            a[r][l]=k++;
        }
        if(r!=1&&l!=n){
            if(a[r-1][l+1]==0){
                r=r-1;l=l+1;
                a[r][l]=k++;
            }else{
                r=r+1;
                a[r][l]=k++;
            }
        }
        
    }
    out();
    return 0;
}