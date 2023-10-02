#include <bits/stdc++.h>
using namespace std;
struct node{
	int sum,ai,bi;
	node(){}
	node(int tsum,int ta,int tb){
		tsum=sum;
		ai=ta;
		bi=tb;
	}
	bool operator<(const node &rhs)const{
		return sum>rhs.sum;
	}
};

int main(){

	ios::sync_with_stdio(false);
	
    return 0;
}
