#include<iostream>
using namespace std;
int a[10010][10],x,y,n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    cin>>x>>y;
    for(int i=n;i>=0;i--){
        if((a[i][0]<=x&&(a[i][0]+a[i][2])>=x)&&(a[i][1]<=y&&(a[i][1]+a[i][3])>=y)){
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}