#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
struct vc{
	int v;
	double c;
}a;
stack<vc> stk;
int v,c,n;
char ch;
int main(){
	cin>>v>>c>>n;
	vc a;
	a.v=v;
	a.c=c;
	stk.push(a);
	while(n--){
		scanf("%s",&ch);
		if(ch=='Z'&&stk.size()>1){
			stk.pop();
		}
		if(ch=='P'){
			scanf("%d %d",&v,&c);
			a.v=stk.top().v+v;
			a.c=(stk.top().v*stk.top().c+v*c)/a.v;
			stk.push(a);
		}
		printf("%d %.5lf\n",stk.top().v,stk.top().c);
	}
	return 0;
}