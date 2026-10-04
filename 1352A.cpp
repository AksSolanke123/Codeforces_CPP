#include <iostream>
#include <cmath>

int output(int n)
{
    int x{0};
    for (int i = 0; i < 5; i++)
    {
        if ((n % 10) != 0)
        {
            x += 1;
        }
        n = n / 10;
    }
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

    int y{0};
    int z{0};
    for (int i = 0; i < n; i++)
    {
        z = a[i];
        std::cout << output(a[i]) << '\n';
        for (int j = 0; j < 6; j++)
        {
            if (z % 10 != 0)
            {
                y = (z % 10) * (std::pow(10, j));
                std::cout << y << ' ';
            }
            z = z / 10;
        }
        std::cout << '\n';
    }
}