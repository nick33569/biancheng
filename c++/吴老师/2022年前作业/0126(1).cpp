#include<iostream>
using namespace std;
int a[15]={10,2,8,22,16,4,10,6,14,20};
void fent(int i){
	if(a[i]%2==1) a[i]++;
	a[i]=a[i]/2;
	if(i==9) a[0]+=a[i];
	else a[i+1]+=a[i];

}
int main(){
	int round=0;
	while(1){
		if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5]&&a[5]==a[6]&&a[6]==a[7]&&a[7]==a[8]&&a[8]==a[9]&&a[9]==a[0]) break;
		round++;
		for(int i=0;i<10;i++){
			for(int j=i;j<10;j++) fent(j);
			for(int j=0;j<=i;j++) fent(j);
		}
		cout<<"round"<<round<<": ";
		for(int i=0;i<9;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}