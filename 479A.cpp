#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int e1 = a + b + c;
    int e2 = a * b * c;
    int e3 = (a + b) * c;
    int e4 = a * (b + c);
    int e5 = a + b * c;
    int e6 = a * b + c;

    cout << max(e1, max(e2, max(e3, max(e4, (max(e5, e6))))));

    return 0;
}