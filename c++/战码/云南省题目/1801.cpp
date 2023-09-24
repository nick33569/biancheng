#include<iostream>
#include<cstdio>
using namespace std;
int a[25][25]={0},n,k=1,x,y,d=1;
void out() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%5d",a[i][j]);
        }
        cout <<"\n";
    }
}

int main(){
    cin>>n;
    x=1,y=1;
    a[1][1]=k++;
    while(k<=n*n){
        if(a[x][y+1]==0&&y+1<=n&&d==1){
            y+=1;a[x][y]=k++;
            if(a[x][y+1]!=0||y+1>n&&d==1) d=2;
        }
        else if(a[x+1][y]==0&&x+1<=n&&d==2){
            x+=1;a[x][y]=k++;
            if(a[x+1][y]!=0||x+1>n&&d==2) d=3;
        }
        else if(a[x][y-1]==0&&y-1>=1&&d==3){
            y-=1;a[x][y]=k++;
            if(a[x][y-1]!=0||y-1<1&&d==3) d=4;
        }
        else if(a[x-1][y]==0&&x-1>=1&&d==4){
            x-=1;a[x][y]=k++;
            if(a[x-1][y]!=0||x-1<1&&d==4) d=1;
        }
        else{
            break;
        }
        
    }
    out();
    return 0;
}