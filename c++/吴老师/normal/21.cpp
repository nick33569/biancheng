#include<iostream>
using namespace std;
char str1[1001];
int main(){
    cin>>str1;
    char *str2=str1;
    int b=strlen(str1)-1;
    for(int i=0;i<=b;i++) cout<<*(str2+b-i);
    return 0;
}