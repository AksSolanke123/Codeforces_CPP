#include <iostream>

void sort(long arr[], int n)
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
    long a[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> a[i];
    }

    sort(a, 4);
    int count{0};
    for (int i = 1; i < 4; i++)
    {
        if (a[i] == a[i - 1])
        {
            count += 1;
        }
    }

    std::cout << count;
}