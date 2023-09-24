#include<bits/stdc++.h>
using namespace std;
int a[25][25],n,temp=1,x=1,y=0;
void out(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
}
int main(){
	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n*n;i++){
		if(y<n&&a[x][y+1]==0&&temp==1){
			y++;
			a[x][y]=i;
			if(y>=n||a[x][y+1]!=0) temp=2,i++;
		}
		if(x<n&&a[x+1][y]==0&&temp==2){
			x++;
			a[x][y]=i;
			if(x>=n||a[x+1][y]!=0) temp=3,i++;
		}
		if(y>1&&a[x][y-1]==0&&temp==3){
			y--;
			a[x][y]=i;
			if(y<=1||a[x][y-1]!=0) temp=4,i++;
		}
		if(x>0&&a[x-1][y]==0&&temp==4){
			x--;
			a[x][y]=i;
			if(x<=0||a[x-1][y]!=0) temp=1;
			if(x<=0) x++;
		}	
	}
	out();
	return 0;
}
