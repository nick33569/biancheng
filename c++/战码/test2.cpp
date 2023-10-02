#include <bits/stdc++.h>
using namespace std;
int a[110005];
int cnt=0;
void mid(){
	sort(a,a+cnt);
	if(cnt%2==0) cout<<a[cnt/2-1]<<endl;
	else cout<<a[cnt/2]<<endl;
}
int main(){
	freopen("median.in","r",stdin);
	freopen("median.out","w",stdout);
	int n,b;
	cin>>n;
	cnt=n;
	for(int i=0;i<n;i++) cin>>a[i];
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="add"){
			cin>>b;
			a[cnt++]=b;
			getline(cin,s);
		}else if(s=="mid") mid();
	}
    return 0;
}
