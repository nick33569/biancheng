#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std;
int T1(void){
    cout<<"I love Luogu!"<<endl;
    return 0;
}

int T2(void){
    cout << 2 + 4 << " " << 10 - 2 - 4<<endl;
    return 0;
}

int T3(void){
    cout<<14/4<<" "<<14-14%4<<" "<<14%4<<endl;
    return 0;
}

int T4(void){
    float a=500.0;
    printf("%.3f",a/3);
    return 0;
} 

int T5(void){
    cout<<(220+260)/(20+12);
    return 0;
}

int T6(void){
    cout<<sqrt(6*6+9*9);
    return 0;
}

int T7(void){
    cout<<"110\n90\n0\n";
    return 0;
}

int T8(void){
    cout<<31.41593<<endl<<78.539825<<endl<<523.59883333333333333333333333333<<endl;
    return 0;
}

int main(void){
    int T;
    cin>>T;
    if(T==1) T1();
    else if(T==2) T2();
    else if(T==3) T3();
    else if(T==4) T4();
    else if(T==5) T5();
    else if(T==6) T6();
    else if(T==7) T7();
    else if(T==8) T8();
    return 0;
}