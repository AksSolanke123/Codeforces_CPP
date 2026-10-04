#include <iostream>

int main()
{
    long long x;
    std::cin >> x;
    int sign{1};
    long long s;
    if (x % 2 == 1)
    {
        sign = -1;
    }
    s = (x + 1) / 2;

    std::cout << s * sign;
}