#include<bits/stdc++.h>
using namespace std;
int a[10010],n,minn;

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		minn=i;
		for(int j=i;j<n;j++){

			if(a[j]<a[minn]) minn=j;
		}
		swap(a[i],a[minn]);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}