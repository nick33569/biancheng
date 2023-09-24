//再也不想见到"Wrong Answer"(红色的) 再见到我当场
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string a , b , c;
    cin >> a >> b;
    if(a.length() >= b.length()) {
    c = a + a ;
    if (c.find(b) != -1) cout << "true"<< endl;
    else cout << "false" << endl;
    }
    else {
    c = b + b ;
    if (c.find(a) != -1) cout << "true"<< endl;
    else cout << "false" << endl;
    }    
    return 0;
    
}

