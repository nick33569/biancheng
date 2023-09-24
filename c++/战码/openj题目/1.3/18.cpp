#include<iostream>
#include<cstdio>
using namespace std;
int fangfa1(){
    int a1,a2,n,ans,t;
    cin>>a1>>a2>>n;
    ans=a2;
    t=a2-a1;
    for(int i=2;i<n;i++){
        ans+=t;
    }
    cout<<ans<<endl;
    return 0;
}
int fangfa2(){
    int a1,a2,n,t;
    cin>>a1>>a2>>n;
    t=a2-a1;
    cout<<a1+(n-1)*t;
    return 0;
}
int main(){
    //方法1为循环，方法2为推导
    //为了这里的美观，主函数中不执行操作
    return 0;
}