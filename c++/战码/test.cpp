#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			if(x<10) cout<<"0"<<x;
			else cout<<x;
			x++;
		}
		cout<<endl;
	}
	cout<<endl;
	x=1;int z=n-1;
	for(int i=1;i<=n;i++){
		for(int j=z;j>0;j--) cout<<"  ";
		for(int j=z;j<n;j++){
			if(x<10) cout<<"0"<<x;
			else cout<<x;
			x++;
		}
		z--;
		cout<<endl;
	}
	return 0;
}