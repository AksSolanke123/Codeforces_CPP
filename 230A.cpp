#include <iostream>
using namespace std;

int min(int arr[], int n)
{
    int loc{0};
    int min{arr[0]};
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            loc = i;
        }
    }
    return loc;
}
int fight(int s, int x, int y)
{
    if (s > x)
    {
        return s + y;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int s, n;
    cin >> s >> n;
    int x[n];
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
}