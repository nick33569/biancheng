#include<iostream>
#include<cstdio>
using namespace std;
int rug[10010][10],n,x,y;//定义数组，变量

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>rug[i][0]>>rug[i][1]>>rug[i][2]>>rug[i][3];//循环输入坐标点数据
    }
    cin>>x>>y;//输入
    for(int i=n;i>=1;i--){//从大到小判断，这是因为要从后铺的地毯开始判断。
        if((rug[i][0]<=x&&(rug[i][0]+rug[i][2])>=x)&&(rug[i][1]<=y&&(rug[i][1]+rug[i][3])>=y)){//判断条件，即x坐标和y坐标都满足
            cout<<i;//如果满足，直接输出并终止程序
            return 0;
        }
    }
    cout<<"-1";//都不满足，输出-1并结束程序
    return 0;
}