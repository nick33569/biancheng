#include<bits/stdc++.h>
using namespace std;
int a[15],n;
bool flag;

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		flag=true;
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				swap(a[j],a[j+1]);
				flag=false;
			}
		}
		if(flag==true) break;
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;	
}
