#include<iostream>
#include<algorithm>
using namespace std;
int z[10];
bool compare(int a,int b){
    return a>b;
}
int main(){
    int n;
    cout<<"������������ָ�����";
    cin>>n;
    cout<<"�뿪ʼ���룬�ǵ���һ�ΰ�һ���س�"<<endl;
    for(int a=1;a<=n;a++) cin>>z[a];
    sort(z+1,z+1+n);
    for(int a=1;a<=n;a++) cout<<z[a]<<" ";
    cout<<endl;
    return 0;
}
