#include <bits/stdc++.h>
using namespace std;
int a[50005],b[50005];
bool ans[2000000005]={false};
bool cmp(int a,int b){
	return a<b;
}
int main(){
    int n,b;
	int maxa=0;
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d",&a);
	for(int i=0;i<n;i++) scanf("%d",&a);
	sort(a,a+n,cmp);
	sort(b,b+n,cmp);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int t=a[i]+b[j];
			ans[t]=true;
			if(maxa<t) maxa=t;
		}
	}
	int cnt=0;
	int c[20];
	for(int i=0;i<maxa;i++){
		if(ans[i]==true) c[cnt++]=i;
	}
	sort(c,c+n,cmp);
	for(int i=0;i<n;i++) cout<<c[i]<<" ";
    return 0;
}