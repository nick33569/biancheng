#include<iostream>
#include<algorithm>
using namespace std;
int z[10]={12,453,21,546,13,56,123,554,23,1111};
int main(){
    int n=10;
    reverse(z+1,z+1+n);
    for(int a=1;a<=10;a++) cout<<z[a]<<" ";
    cout<<endl;
    return 0;
}

