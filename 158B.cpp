#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    int ones{0}, twos{0}, threes{0}, fours{0};

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            ones++;

        else if (a[i] == 2)
            twos++;

        else if (a[i] == 3)
            threes++;

        else if (a[i] == 4)
            fours++;
    }

    int cars = 0;

    cars += fours;

    cars += threes;
    ones -= std::min(ones, threes);

    cars += twos / 2;
    if (twos % 2 == 1)
    {
        cars++;
        ones -= std::min(ones, 2);
    }

    cars += (ones + 3) / 4;

    std::cout << cars << '\n';
}