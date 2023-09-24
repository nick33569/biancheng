#include<iostream>
using namespace std;
int a[110],n,minN,b;
int main(){
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		minN=i;
		for(int j=i;j<n;j++){
			if(a[minN]>a[j]){
				minN=j;
			}
		}
		swap(a[i],a[minN]);
		printf("swap(a[%d], a[%d]):",i,minN);
		for(int k=0;k<n;k++) printf("%d ",a[k]);
		printf("\n");
	}
	return 0;
}
