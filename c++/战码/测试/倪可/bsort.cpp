#include<bits/stdc++.h>
using namespace std;
int a[110],x,y,n;
bool cmp(int p,int q){
	p=(p/10000)+((p-p/10000*10000)/1000*10)+((p-p/1000*1000)/100*100)+((p-p/100*100)/10*1000)+p%10*10000;
	q=(q/10000)+((q-q/10000*10000)/1000*10)+((q-q/1000*1000)/100*100)+((q-q/100*100)/10*1000)+q%10*10000;//我不知道怎么优化啊 
	return p<q;//小于符号是因为要从小到大输出
}//排序
/*I really don't know how to do this.
		  (bsort.cpp)  It is real.   */
int main(){
	freopen("bsort.in","r",stdin);
	freopen("bsort.out","w",stdout);
	cin>>x>>y;
	n=y-x; 
	for(int i=0;i<=n;i++){
		a[i]=x;
		x++;
	}
	sort(a,a+n+1,cmp);
	for(int i=0;i<=n;i++){
		cout<<a[i]<<endl; 
	}
	return 0;
}
