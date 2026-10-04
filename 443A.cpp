#include <iostream>

int main()
{
    int x{1};
    int div1[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin >> div1[i];
        x *= div1[i];
    }
    int div2[6];
    int k{0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; i < 4; i++)
        {
            div2[k] = div1[i] * div1[j];
            k += 1;
        }
    }

    int d;
    std::cin >> d;

    int a[4];
    int sum_a{0};
    for (int i = 0; i < 4; i++)
    {
        a[i] = d / div1[i];
        sum_a += a[i];
    }

    int sum_b{0};
    int b[6];
    for (int i = 0; i < 6; i++)
    {
        b[i] = d / div2[i];
        sum_b += b[i];
    }

    int sum_c;
    int c[4];
    for (int i = 0; i < 4; i++)
    {
        c[i] = (d * x) / div1[i];
        sum_c += c[i];
    }

    int y{d / x};

    int z;
    z = sum_a + sum_b + sum_c + y;

    std::cout << z;
}