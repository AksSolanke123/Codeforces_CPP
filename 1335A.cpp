#include <iostream>

int answer(int n)
{
    int x;
    x = ((n + 1) / 2) - 1;
    return x;
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

    for (int i = 0; i < n; i++)
    {
        std::cout << answer(a[i]) << '\n';
    }
}