//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string str;
int main(){
	int len;
	cin>>str;
	len=str.size();
	if(len>2&&str[len-2]=='e'&&str[len-1]=='r'){
		str[len-2]='\0';
		str[len-1]='\0';
	}
	if(len>2&&str[len-2]=='l'&&str[len-1]=='y'){
		str[len-2]='\0';
		str[len-1]='\0';
	}
	if(len>3&&str[len-3]=='i'&&str[len-2]=='n'&&str[len-1]=='g'){
		str[len-3]='\0';
		str[len-2]='\0';
		str[len-1]='\0';
	}
	for(int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
 
	return 0;
}