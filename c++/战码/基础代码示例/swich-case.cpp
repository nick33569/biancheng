#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
    int score;
    cin>>score;
    switch(score){//括号里面放变量
        case 10:
            cout<<"优秀"<<endl;
            break;
        case 9:
            cout<<"优秀"<<endl;
        case 8:
            cout<<"良好"<<endl;
        case 7:
            cout<<"中等"<<endl;
        case 6:
            cout<<"合格"<<endl;
        default://默认（以上条件均不满足时）
            cout<<"不合格"<<endl;
    }
    return 0;
}

