#include<bits/stdc++.h>
using namespace std;
string s;
map<string,int> trees;
int main(){
	freopen("a.in","r",stdin);
	int cnt=0;
    while(getline(cin,s)) trees[s]++,cnt++;//把输入的树存进map
	map<string,int>::iterator it;//遍历map
	for(it=trees.begin();it!=trees.end();it++){
		cout<<it->first<<" ";//key 在本题中是树的种类
    	printf("%.4f\n",it->second*100.0/cnt);//value/cnt 在本题中是对应树种的占比
	}
    return 0;
}
