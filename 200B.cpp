#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    double s{0};

    for (int i = n; i > 0; i--)
    {
        int p;
        std::cin >> p;
        s = s + p;
    }
    double percentage{};
    percentage = s / n;

    std::cout << percentage;

    return 0;
}