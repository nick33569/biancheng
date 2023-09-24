#include<bits/stdc++.h>
using namespace std;
struct work{
	int h,m,s;
	work operator +(const work x) const{
		work t;
		t.s=(s+x.s)%60;
		t.m=(m+x.m+((s+x.s)/60))%60;
		t.h=h+x.h+(m+x.m+((s+x.s)/60))/60;
		return t;
	}
};
int main(){
	int n;
	work w,sum;
	cin>>n;
	sum.h=sum.m=sum.s=0;
	for(int i=0;i<n;i++){
		cin>>w.h>>w.m>>w.s;
		sum=sum+w;
	}
	printf("%dhour %dminute %dsecon",sum.h,sum.m,sum.s);//至于为什么是secon而不是second 去问那些出题的吧
	return 0;
}