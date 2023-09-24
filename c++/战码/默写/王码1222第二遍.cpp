#include<bits/stdc++.h>
using namespace std;
int a[100010],t[1010]={0},n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		t[a[i]]++;
	}
	for(int i=0;i<1005;i++){
		while(t[i]){
			printf("%d\n",i);
			t[i]--;
		}
	}
	return 0;
}
