#include <bits/stdc++.h>
using namespace std;
long long a[50005],b[50005],c[2500000005];
bool cmp(long long a,long long b){
	return a<b;
}
int main(){
	freopen("nsum.in","r",stdin);
	freopen("nsum.out","w",stdout);
    int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	for(int i=0;i<n;i++) scanf("%lld",&b[i]);
	sort(a,a+n,cmp);
	sort(b,b+n,cmp);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[cnt++]=a[i]+b[j];
		}
	}
	sort(c,c+cnt,cmp);
	for(int i=0;i<n;i++) printf("%lld ",c[i]);
    return 0;
}