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

    int count{0};
    int days{0};
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] <= a[i])
        {
            if (i == 1)
            {
                count += 2;
            }
            else
            {
                count += 1;
            }
        }
        else
        {
            if (count > days)
            {
                days = count;
                count = 0;
            }
            else
            {
                count = 0;
            }
        }
    }

    cout << days;
}
