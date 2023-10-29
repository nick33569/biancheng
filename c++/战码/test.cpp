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
        int id,g;
        while(n--){
            cin>>id>>g;
            sl[g]=id;
            int ans;
            map<int,int>::iterator it=sl.find(g);
            if(it==sl.begin()) ans=((++it)->second);
            else{
                map<int,int>::iterator it2=it;
                it2--,it++;
                ans=(g-it2->first<=it->first-g)?it2->second:it->second;
            }
            cout<<id<<" "<<ans<<endl;
        }
        // map<int,int>::iterator it;

    }
    return 0;
}