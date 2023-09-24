#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


int main()
{
    double a, b, c, d, e, f, g, h, i;
    cin >> a >> b >> c;
    d = b * b;
    e = 4 * a * c;
    f = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    g = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    h = -b / (2 * a);
    i = sqrt(4 * a * c - b * b) / (2 * a);
    cout << setiosflags(ios::fixed) << setprecision(5);
    if (d == e)
    {
    if (f == -0.00000)
    {
        f = 0;
        g = 0;
    }
    cout << "x1=x2=" << g;
    }
    else if (d > e)
    {
        if (f > g)
        {
            cout << "x1=" << f << ";" << "x2=" << g;
        }
    else if (f < g)
    {
        cout << "x1=" << g << ";" << "x2=" << f;
    }
    }
    else if (d < e)
    {
        if (h == -0.00000)
        {
            h = 0;
        }
        cout << "x1=" << h << "+" << i << "i;x2=" << h << -i << "i";
    }
    return 0;
}