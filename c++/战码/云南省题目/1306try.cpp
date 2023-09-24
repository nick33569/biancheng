#include<iostream>
#include<cstdio>
using namespace std;
int a[15][15],n;
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
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=i;j<=n+1-i;j++){
            for(int k=i;k<=n+1-i;k++){
                a[j][k]=i;
            }
        }
    }
	out();
    return 0;
}