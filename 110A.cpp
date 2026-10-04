#include <iostream>
#include <string>

int luckyDigits(long long x)
{
    int y{0};
    std::string strx = std::to_string(x);
    for (char &ch : strx)
    {
        if ((ch == '4') or (ch == '7'))
        {
            y += 1;
        }
    }

    return y;
}

bool nearlyLucky(int x)
{
    std::string strx = std::to_string(x);
    for (char &ch : strx)
    {
        if ((ch != '4') and (ch != '7'))
        {
            return false;
        }
    }

    return true;
}
int main()
{
    long long x;
    std::cin >> x;
    if (nearlyLucky(luckyDigits(x)) == true)
    {
        std::cout << "YES";
    }
    else if (nearlyLucky(luckyDigits(x)) == false)
    {
        std::cout << "NO";
    }
    return 0;
}