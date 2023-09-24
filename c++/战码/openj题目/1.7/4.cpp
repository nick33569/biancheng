#include<bits/stdc++.h>
using namespace std;

int d;
string play(string a,string b){
	if(a[0]==82){
		if(b[0]==83) return "Player1";
		if(b[0]==82) return "Tie";
		if(b[0]==80) return "Player2";
	}
	if(a[0]==83){
		if(b[0]==83) return "Tie";
		if(b[0]==82) return "Player2";
		if(b[0]==80) return "Player1";
	}
	if(a[0]==80){
		if(b[0]==83) return "Player2";
		if(b[0]==82) return "Player1";
		if(b[0]==80) return "Tie";
	}
}
int main(){
	string a,b;
	cin>>d;
	for(int i=0;i<d;i++){
		cin>>a>>b;
		cout<<play(a,b)<<endl;
	}
	return 0;
}