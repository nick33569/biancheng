#include<bits/stdc++.h>
using namespace std;
struct student{
	int xh,yw,sx,en,total;
};
bool cmp(student a,student b){
	if(a.total==b.total){
		if(a.yw==b.yw) return a.xh<b.xh;
		else return a.yw>b.yw;
	}else return a.total>b.total;
}
student s[305];
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		s[i].xh=i+1;
		cin>>s[i].yw>>s[i].sx>>s[i].en;
		s[i].total=s[i].yw+s[i].sx+s[i].en;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<5;i++){
		cout<<s[i].xh<<" "<<s[i].total<<"\n";
	}
	return 0;
}