#include<bits/stdc++.h>
using namespace std;
int a[100010],t[1010]={0},n;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		t[a[i]]++;
	}
	for(int i=0;i<1005;i++){
		while(t[i]){
			printf("%d\n",i);
			t[i]--;
		}
	}
	return 0;
}




//	sort(a,a+n);  //����   ���ǲ��ᳬʱ 
//
//
//	for(int i=0;i<n-1;i++){
//		flag;
//		for(int j=0;j<n-1-i;j++){
//			if(a[j]>a[j+1]){
//				swap(a[j],a[j+1]);
//				!flag;
//			}
//		}
//		if(flag) break;
//	}       //ð������ ʵ�ⳬʱ
//
//
//	for(int i=0;i<n;i++){
//		minN=i;
//		for(int j=i+1;j<n;j++){
//			if(a[j]<a[minN]) minN=j;
//		}
//		swap(a[i],a[minN]);
//	}      //ѡ������ ��Ȼ��ʱ

