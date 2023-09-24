#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
    int ys,mother=0,surplus=0;
    for(int i=1;i<=12;i++){
        cin>>ys;
        surplus=300-ys+surplus;
        if(surplus<0){
            cout<<-i<<endl;
            return 0;
        }
        mother+=surplus/100;//整百的张数记录在妈妈那里
        surplus%=100;//剩余的钱

    }
    cout<<surplus+mother*120<<endl;
    return 0;
}