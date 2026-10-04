#include <iostream>

long test(int a, int b)
{
    long x;
    if (a % b != 0)
    {
        x = b - (a % b);
    }
    else
    {
        x = 0;
    }
    return x;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        long a, b;
        std::cin >> a >> b;

        long x;
        x = test(a, b);

        std::cout << x << '\n';
    }

    return 0;
}
