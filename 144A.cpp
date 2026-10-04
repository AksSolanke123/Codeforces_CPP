#include <iostream>

int maxIndex(int arr[], int n)
{
    int max;
    max = arr[0];
    int index{0};
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int minIndex(int arr[], int n)
{
    int min;
    min = arr[0];
    int index{0};
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

int swaps(int n, int min, int max)
{
    int minswaps;
    minswaps = (n - 1) - min;
    int maxswaps;
    maxswaps = max;
    int total;
    total = minswaps + maxswaps;
    if (min < max)
    {
        total = total - 1;
    }
    return total;
}
int main()
{
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int x;
    x = swaps(n, minIndex(a, n), maxIndex(a, n));
    std::cout << x;
}