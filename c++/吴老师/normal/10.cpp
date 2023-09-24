#include<iostream>
#include<algorithm>
using namespace std;
int z[10];
bool compare(int a,int b){
    return a>b;
}
int main(){
    int n;
    cout<<"请给定输入数字个数：";
    cin>>n;
    cout<<"请开始输入，记得输一次按一个回车"<<endl;
    for(int a=1;a<=n;a++) cin>>z[a];
    sort(z+1,z+1+n);
    for(int a=1;a<=n;a++) cout<<z[a]<<" ";
    cout<<endl;
    return 0;
}
