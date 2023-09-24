#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a<b) swap(a,b);
    if(a%b==0) return b;
    else gcd(b,a%b);
}
bool flag;
long long t,x,y,z,tmp1;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	cin>>t;
	for(int i=0;i<t;i++){
		flag=false;
		scanf("%lld %lld",&x,&z);
		for(long long j=1;j<=z;j++){
			tmp1=gcd(x,j);
			if(tmp1*j*x==z&&flag==false){
				printf("%lld\n",j);
				flag=true;
				break;
			}
		}
		if(!flag) cout<<"-1\n";
	}
	return 0;
}