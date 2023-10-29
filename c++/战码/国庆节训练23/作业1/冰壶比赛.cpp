#include<bits/stdc++.h>
using namespace std;
int r;
int a[10],b[10],m,n,zm,zn,fm,fn;//a 甲 b 乙
bool cmp(int a,int b) {return a<b;}
int main(){
    ios::sync_with_stdio(false);
    cin>>r;
    int x=10;
    zm=zn=0;
    while(x--){
        fm=fn=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>a[0];
        if(a[0]==-1) break;
        for(int i=1;i<8;i++) cin>>a[i];
        for(int i=0;i<8;i++) cin>>b[i];
        sort(a,a+8,cmp);
        sort(b,b+8,cmp);
        m=a[0],n=b[0];
		if(m<n){
			for(int i=0;i<8;i++){
				if(n<a[i]||a[i]>r) break;
				if(n>a[i]&&a[i]<=r) fm++;
			}
		}else if(m>n){
			for(int i=0;i<8;i++){
				if(m<b[i]||b[i]>r) break;
				if(m>b[i]&&b[i]<=r) fn++;
			}
		}
		cout<<fm<<":"<<fn<<endl;
		zm+=fm,zn+=fn;
    }
    cout<<zm<<":"<<zn<<endl;
    return 0;
}