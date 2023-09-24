#include<iostream>
#include<cstdio>
using namespace std;
int a[15][15],n;
void out() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
int main() {
    
    cin >> n;
    for (int i = 1; i <= (n + 1) / 2; i++) {
        for (int j = 1; j <= (n + 1) / 2; j++) {
            a[i][j] = a[i][n + 1 - j] = a[n + 1 - i][j] = a[n + 1 - i][n + 1 - j] = min(i, j);
            out();
            cout << "\n";

        }
    }
    out();


    return 0;
}