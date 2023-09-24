//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<bits/stdc++.h>
using namespace std;

bool p(string s1,string s2){
	return s1.find(s2)==s1.npos;
}
string s1,s2;
int main(){
	cin>>s1>>s2;
	//     find函数找字串 npos表示未找到
	if(s1.size()>=s2.size()){
		if(!p(s1,s2)){
			cout<<s2<<" is substring of "<<s1;
			return 0;
		}
	}
	if(s1.size()<s2.size()){
		if(!p(s2,s1)){
			cout<<s1<<" is substring of "<<s2;
			return 0;
		}
	}
	cout<<"No substring";
	return 0;
}