#include <iostream>
using namespace std;

char row(int r, int c, int m)
{
    if (r % 2 == 0)
    {
        return '#';
    }
    else if (r % 4 == 1)
    {
        if (c == m - 1)
        {
            return '#';
        }
        else
        {
            return '.';
        }
    }
    else if (r % 4 == 3)
    {
        if (c == 0)
        {
            return '#';
        }
        else
        {
            return '.';
        }
    }
    return 'a';
}

int main()
{
    int x{0};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            x += 1;
            if (j == m - 1)
            {
                cout << row(i, j, m) << '\n';
            }
            else
            {
                cout << row(i, j, m);
            }
        }
    }
}