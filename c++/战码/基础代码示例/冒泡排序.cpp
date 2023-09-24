#include<bits/stdc++.h>
using namespace std;
int a[105],n;
bool flag=true;
int k{//从大到小 
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		flag=true;
		for(int j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				flag=false;
			}
		}
		if(flag==true) break;
		cout<<endl; 
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
int main(){//从小到大 
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		flag=true;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				flag=false;
			}
		}
		if(flag==true) break;
		cout<<endl; 
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
