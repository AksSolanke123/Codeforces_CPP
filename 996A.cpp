#include <iostream>

int main()
{
    long n;
    std::cin >> n;

    int denominations[5] = {100, 20, 10, 5, 1};
    long notes[5];

    for (int i = 0; i < 5; i++)
    {
        notes[i] = n / denominations[i];
        n = n % denominations[i];
    }

    long sum{0};

    for (int i = 0; i < 5; i++)
    {
        sum += notes[i];
    }

    std::cout << sum;
}
