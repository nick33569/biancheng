#include<bits/stdc++.h>
using namespace std;
struct work{
	int hour,min,sec;
	work operator +(const work x) const{
		work t;
		t.sec=(sec+x.sec)%60;
		t.min=(min+x.min+((sec+x.sec)/60))%60;
		t.hour=hour+x.hour+((min+x.min+((sec+x.sec)/60))/60);
		return t;
	}
};
int n;
int main(){
	work w,s;
	cin>>n;
	s.hour=s.min=s.sec=0;
	for(int i=0;i<n;i++){
		cin>>w.hour>>w.min>>w.sec;
		s=s+w;
	}
	printf("%dhour %dminute %dsecon",s.hour,s.min,s.sec);
}