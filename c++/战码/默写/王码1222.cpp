#include<iostream>
#include<cstdio>
using namespace std;
int a[100010]={0},t[1010],n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		t[a[i]]++;
	}
	for(int i=0;i<=1000;i++){
		while(t[i]){
			if(t[i]!=0){
				printf("%d\n",i);
				t[i]--;
			}
		}
	}
    return 0;
}
