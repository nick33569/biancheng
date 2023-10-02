#include<bits/stdc++.h>
using namespace std;

bool f[1005][1000005],f2;
int maxx[1005];
struct siz{
    int bh,sz;
};
bool cmp(siz a,siz b){
    return a.sz>b.sz;
}
int main(){
    int n,g=1;
    while(cin>>n){
        siz si[1005];
        if(n==0) break;
        queue<int> q[1005];
        printf("Scenario #%d\n",g);
        for(int k=0;k<n;k++){
            int a;
            scanf("%d",&a);
            for(int i=0;i<a;i++){
                int x;
                cin>>x;
                maxx[k]=max(x,maxx[k]);
                f[k][x]=true;
                q[k].push(x);
            }
            string s;
            while(~scanf("%s",&s)){
                if(s=="STOP") break;
                else if(s=="ENQUEUE"){
                    f2=false;
                    int t;
                    scanf("%d",&t);
                    for(int i=0;i<n;i++){
                        if(f[i][t]==true){
                            q[i].push(t);
                            break;
                        }
                    }
                }
                else if(s=="DEQUEUE"){
                    for(int i=1;i<n;i++){
                        si[i].sz=q[i].size();
                        si[i].bh=i;
                    }
                    sort(si,si+n,cmp);
                    cout<<q[si[0].bh].front()<<endl;
                    q[si[0].bh].pop();
                }
            }
        }
        g++;
        cout<<endl;
    }
    return 0;
}