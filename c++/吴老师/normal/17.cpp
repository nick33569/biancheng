#include<bits/stdc++.h>
using namespace std;

struct jgt
{
	int c,d;
	jgt()
	{
		c=0;
		d=0;
	}
}z[1001];



bool operator<(jgt a,jgt b)
{
	if(a.c+a.d<b.c+b.d) return true;
	else return false;
}
int main(){
	cout<<"please input something"<<endl; 
	cout<<"please input something"<<endl; 
	int n;
	cin>>n;
	if(n<1&&n>1000){
		cout<<"wrong input"<<endl;
		system("pause");
		return 0;
	} 
	for(int i=1;i<=n;i++)
	{
		cin>>z[i].c>>z[i].d;
	}
	//stable_sort(z+1,z+1+n);
	for(int a=1;a<=n;a++)
	{
		for(int b=1;b<n;b++)
		{
			if(z[b].c+z[b].d>z[b+1].c+z[b+1].d)
			{
				swap(z[b],z[b+1]);
			}
			else if(z[b].c+z[b].d==z[b+1].c+z[b+1].d)
			{
				if(z[b].c>z[b+1].c)
				{
					swap(z[b],z[b+1]);
				}
			 } 
		}
	}
	cout<<"output: "<<endl; 
	for(int i=1;i<=n;i++)
	{
		cout<<z[i].c<<"  "<<z[i].d<<endl;
	}
	return 0;
}
