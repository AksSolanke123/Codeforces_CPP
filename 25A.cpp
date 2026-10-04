#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x{0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            x++;
        }
    }
    int loc{0};
    if (x == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                loc = i;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                loc = i;
            }
        }
    }
    cout << loc + 1;
}