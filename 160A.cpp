#include <iostream>
#include <vector>

int sum(int arr[], int x, int y);

int coins(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (sum(arr, 0, i - 1) < sum(arr, i, n - 1))
        {
            return n - i;
        }
    }
    return 0;
}

int sum(int arr[], int x, int y)
{
    int sum{0};
    for (int i = x; i <= y; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    sort(a, n);

    std::cout << coins(a, n);
}