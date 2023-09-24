#include<iostream>
using namespace std;
struct monkey{
	int num,next;
};
int n,k,r,kk,cou,cur,pre;
monkey m[1005];
int main(){
	cin>>n>>k;
	for(int i=1;i<n;i++){
		m[i].num=i;
		m[i].next=i+1;
	}
	m[n].num=n;
	m[n].next=1;
	r=n;
	kk=k%n;
	if(kk==0) kk=n;
	pre=n;cur=1;
	while(r>1){
		cou++;
		if(cou==kk){
			m[pre].next=m[cur].next;
			r--;
			kk=k%r;
			if(kk==0) kk=r;
			cou=0;
		}else pre=cur;
		cur=m[cur].next;
	}
	cout<<m[cur].next;
	return 0;
}