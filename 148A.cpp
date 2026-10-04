#include <iostream>

int main()
{
    int k, l, m, n;
    std::cin >> k;
    std::cin >> l;
    std::cin >> m;
    std::cin >> n;

    int d;
    std::cin >> d;

    int x, y, z, w;
    x = (d / l) + (d / k) + (d / m) + (d / n);
    y = (d / (l * k)) + (d / (l * m)) + (d / (l * n)) + (d / (k * m)) + (d / (k * n)) + (d / (m * n));
    z = (d / (k * l * m)) + (d / (k * l * n)) + (d / (k * m * n)) + (d / (l * m * n));
    w = d / (k * l * m * n);

    int a = x - y + m - n;
    std::cout << a;
}