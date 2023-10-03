#include <iostream>
#include <cstdio>
using namespace std;
int n, k, sum, ans;
int a[40];
bool xuan[40];
void dfs(int s, int cnt,int pos) {
	if(s>sum || cnt>k) return ;
    if (s == sum && cnt == k) {
        ans++;
    }
    for (int i = pos; i < n; i++) {
        if (!xuan[i]) {
            xuan[i] = 1;
			dfs(s+a[i],cnt+1,i+1);
            xuan[i] = 0;
        }
    }
}
int main() {
    scanf("%d%d%d",&n,&k,&sum);
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    ans = 0;
    dfs(0, 0 ,0);
    printf("%d\n",ans);
    return 0;
}
