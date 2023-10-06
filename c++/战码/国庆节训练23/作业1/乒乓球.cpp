#include<bits/stdc++.h>
using namespace std;
string s;
int a=0,b=0;
int main(){
    ios::sync_with_stdio(false);
    char c;
    while(cin>>c){
        if(c=='E') break;
        else if(c=='L'||c=='W') s+=c;
    }
    a=0,b=0;
    int i=0;
    while(i<s.size()){
        c=s[i++];
        if(a==11||b==11){
            printf("%d:%d\n",a,b);
            a=0,b=0;
        }
        if(c=='W'&&a<12) a++;
        if(c=='L'&&b<12) b++;
    }
    if(a!=11&&b!=11) printf("%d:%d\n",a,b);
    a=0,b=0,i=0;
    cout<<endl;
    while(i<s.size()){
        c=s[i++];
        if(a==21||b==21){
            printf("%d:%d\n",a,b);
            a=0,b=0;
        }
        if(c=='W'&&a<22) a++;
        if(c=='L'&&b<22) b++;
    }
    if(a!=21&&b!=21) printf("%d:%d\n",a,b);
    return 0;
}
