#include <iostream>
using namespace std;

bool sum(int a, int b, int c)
{
    if (a + b == c)
    {
        return true;
    }
    else if (a + c == b)
    {
        return true;
    }
    else if (b + c == a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (sum(a, b, c))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}