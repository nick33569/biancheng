#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
struct node{//飞机离开与到达时间
	int a,b;
    bool operator<(const node &rhs)const{
        return a<rhs.a;
    }
}air1[MAXN],air2[MAXN];
struct leave{//飞机离开时间b 所占用的廊道id
    int b;
    int id;
    bool operator<(const leave &rhs)const{
        return b>rhs.b;
    }
};
int f1[MAXN],f2[MAXN];
priority_queue<int,vector<int>,greater<int> > q_id;
priority_queue<leave> q_leave;
int main(){
    freopen("airport.in","r",stdin);
    freopen("airport.out","w",stdout);
	ios::sync_with_stdio(false);
	int n,m1,m2;
	cin>>n>>m1>>m2;
    for(int i=1;i<=m1;i++) cin>>air1[i].a>>air1[i].b;
    for(int i=1;i<=m2;i++) cin>>air2[i].a>>air2[i].b;
    sort(air1+1,air1+m1+1);
    sort(air2+1,air2+m2+1);
  
    for(int i=1;i<=n;i++){ //存储空闲廊道id （初始化） 
		q_id.push(i);
	}
    for(int i=1;i<=m1;i++){
        while(!q_leave.empty() && air1[i].a > q_leave.top().b){
            q_id.push(q_leave.top().id);
            q_leave.pop();
        }
        if(q_id.empty()) continue;
        q_leave.push({air1[i].b,q_id.top()});
        f1[q_id.top()]++;
        q_id.pop();
    }
    while(!q_id.empty()) q_id.pop();
    while(!q_leave.empty()) q_leave.pop();
    //国外
	for(int i=1;i<=n;i++){ //存储空闲廊道id （初始化） 
		q_id.push(i);
	}
	for(int i=1;i<=m2;i++){
		while(!q_leave.empty() && air2[i].a > q_leave.top().b){
			q_id.push( q_leave.top().id );
			q_leave.pop();
		}
		if(q_id.empty())continue;
		q_leave.push({air2[i].b,q_id.top()}); 
		f2[q_id.top()]++; 
		q_id.pop();
	} 
	for(int i=1;i<=n;i++){
		f1[i] = f1[i]+f1[i-1]; 
	}
	for(int i=1;i<=n;i++){
		f2[i] = f2[i]+f2[i-1]; 
	}
	int ans =-1;
	for(int i=0;i<=n;i++){
		ans = max(ans,f1[i]+f2[n-i]);
	}
	cout << ans;
	return 0;
}