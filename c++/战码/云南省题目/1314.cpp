#include<cstdio>
using namespace std;
struct monkey{
	int next,num;
};
int main(){
	monkey m[1005];
	int n,k,kk,cur,pre,r,count=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		m[i].num=i;
		m[i].next=i+1;
	}
	m[n].num=n;
	m[n].next=1;
	kk=k%n;
	r=n;
	if(kk==0) kk=n;
	pre=n;cur=1;
	while(r>1){
		count++;
		if(count==kk){
			m[pre].next=m[cur].next;
			r--;
			kk=k%r;
			if(kk==0) kk=r;
			count=0;
		}else pre=cur;
		cur=m[cur].next;
	}
	printf("%d\n",m[cur].num);
	return 0;
}
