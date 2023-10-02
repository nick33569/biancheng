#include <bits/stdc++.h>
using namespace std;
struct node{
	int sum;
	int ai,bi;
	bool operator<(const node &rhs)const{
		return sum>rhs.sum;
	}
};
int a[50005],b[50005];
priority_queue<node,vector<node>,less<node> > pq;
int main(){
	// freopen("nsum.in","r",stdin);
	// freopen("nsum.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		pq.push({a[i]+b[0],i,0});
	}//优先队列初始化
	for(int i=0;i<n;i++){
		cout<<pq.top().sum<<" ";
		node t=pq.top();//把top存起来
		pq.push({a[t.ai]+b[t.bi+1],t.ai,t.bi+1});
		pq.pop();
	}
    return 0;
}
