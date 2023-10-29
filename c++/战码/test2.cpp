#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
int n;
map<int,int> sl;
int main(){
    ios::sync_with_stdio(false);
    while(cin>>n){
        if(n==0) break;
        sl.clear();
        sl[1000000000]=1;
        int x,y;
        while(n--){
            cin>>x,y;
            sl[y]=x;
			cout<<sl[y]-1<sl[y]+1;
        }
		
        // map<int,int>::iterator it;
        
    }
    return 0;
}