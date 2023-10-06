#include<bits/stdc++.h>
using namespace std;
int a1[6000],a2[6000],b1[6000],b2[6000];
string s;
int main()
{
	int a=1,b=1; 
	bool flag=false;
	while(cin>>s){ 
		int l=s.size();
		for(int i=0;i<l;i++){
			if(s[i]=='E'){
				flag=true;
				break;
			}
			if(s[i]=='W'){
				a1[a]++;
				b1[b]++;
			}
			if(s[i]=='L'){
				a2[a]++;
				b2[b]++;
			}
			if((a1[a]>=11||a2[a]>=11)&&abs(a1[a]-a2[a])>=2) a++;
			if((b1[b]>=21||b2[b]>=21)&&abs(b1[b]-b2[b])>=2) b++;
		}
		if(flag) break;
	}
	for(int i=1;i<=a;i++)
		cout<<a1[i]<<":"<<a2[i]<<endl;
	cout<<endl;
	for(int i=1;i<=b;i++)
		cout<<b1[i]<<":"<<b2[i]<<endl;
	return 0; 
}