#include <iostream>
using namespace std;

bool winner(int x)
{
    if (x % 3 == 0)
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (winner(a[i]))
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
    }
}