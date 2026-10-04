#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int levels[n];
    for (int i = 0; i < n; i++)
    {
        levels[i] = i + 1;
    }

    int p;
    std::cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
        std::cin >> a[i];
    }

    int q;
    std::cin >> q;
    int b[q];
    for (int i = 0; i < n; i++)
    {
        std::cin >> b[i];
    }

    for (int i = 0; i < p; i++)
    {
        std::cout << a[i];
    }
}
