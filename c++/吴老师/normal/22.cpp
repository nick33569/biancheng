#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;

}
int sub(int x,int y){
    return x-y;
}
int (*fun)(int x,int y);

int main(int argc,char *argv[]){
    fun=&add;
    cout<<(*fun)(1,2);
    fun=&sub;
    cout<<" ";
    cout<<(*fun)(5,3);
    return 0;
}