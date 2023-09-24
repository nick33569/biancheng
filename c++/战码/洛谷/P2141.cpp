#include<bits/stdc++.h>
using namespace std;
int a[105],t[20005]={0},n,ans;
bool flag;

int main(){
//	freopen("P2141_2.in","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			t[a[i]+a[j]]=1;
			
		}
	}
	for(int i=0;i<n;i++){
		if(t[a[i]]) ans++;
	}
	cout<<ans;
//	fclose(stdin);
	return 0;	
}

 
