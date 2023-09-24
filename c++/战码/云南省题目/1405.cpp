#include<bits/stdc++.h>
using namespace std;
int a[1000005],f2,f3,n,r,f,x,y;
int main(){
	cin>>f>>n;
	a[1]=f;
	f2=f3=1;r=1;
	while(r!=n){
		r++;
		x=a[f2]*2+1;
		y=a[f3]*3+1;
		if(x>y){
			a[r]=y;
			f3++;
		}
		else if(x<y){
			a[r]=x;
			f2++;
		}
		else{
			a[r]=x;
			f2++;f3++;
		}
	}
	cout<<a[n];
	return 0;
}