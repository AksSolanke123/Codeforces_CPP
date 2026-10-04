#include <iostream>
#include <string>

bool luckyNumber(int x)
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

bool almostLucky(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (luckyNumber(i))
        {
            if (n % i == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int x;
    std::cin >> x;
    if (luckyNumber(x))
    {
        std::cout << "YES";
    }
    else if (almostLucky(x))
    {
        std::cout << "YES";
    }
    else if (almostLucky(x) == 0)
    {
        std::cout << "NO";
    }
}