#include<bits/stdc++.h>
using namespace std;
int a[105],n,minN;

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		minN=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minN]) minN=j;
		}
		swap(a[i],a[minN]);
	}
	return 0;	
}
