// #include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<cstring>
#include<cstdio>
using namespace std;
string s;
map<string,int> trees;
int main(){
	int cnt=0;
	//ios::sync_with_stdio(false);//优化cin,cout的效率,表示不用缓存,在这题中可以不用
    while(getline(cin,s)) trees[s]++,cnt++;//把输入的树存进map
	map<string,int>::iterator it;//遍历map
	for(it=trees.begin();it!=trees.end();it++){
		cout<<it->first<<" ";//key 在本题中是树的种类
    	printf("%.4f\n",it->second*100.0/cnt);//value/cnt 在本题中是对应树种的占比
	}
	// for(auto it=trees.begin();it!=trees.end();it++){
	// 	cout<<it->first<<" ";
	// 	printf("%.4lf\n",it->second*100.0/cnt);//"\n"的效率
	// }
    return 0;
}