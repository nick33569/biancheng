#include<iostream>
#include<cstdio>
using namespace std;
int n,a[105],t[20005],ans;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			t[a[i]+a[j]]=1;
		}
	}
	for(int i=0;i<n;i++){
		if(t[a[i]]) ans++;
	}
	printf("%d",ans);
    return 0;
}
