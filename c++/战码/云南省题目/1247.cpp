#include<bits/stdc++.h>
using namespace std;
int a[305][5],n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) {
		a[i][0]=i;
		cin>>a[i][1]>>a[i][2]>>a[i][3];
		a[i][4]=a[i][1]+a[i][2]+a[i][3];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=n-1;j++){
			if(a[j][4]<a[j+1][4]){
				for(int k=0;k<5;k++){
					swap(a[j][k],a[j+1][k]);
				}
			}else if(a[j][4]==a[j+1][4]){
				if(a[j][1]<a[j+1][1]){
					for(int k=0;k<5;k++){
						swap(a[j][k],a[j+1][k]);
					}	
				}else if(a[j][1]==a[j+1][1]){
					if(a[j][0]>a[j+1][0]){
						for(int k=0;k<5;k++){
							swap(a[j][k],a[j+1][k]);
						}
					}
				}
			}
		}
	}
	for(int i=1;i<=5;i++){
		cout<<a[i][0]<<" "<<a[i][4]<<endl;
	}
	return 0;
}
