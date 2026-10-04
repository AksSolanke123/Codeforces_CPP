#include <iostream>
#include <string>

bool beautifulYear(int x)
{
    int nums[4] = {-1, -1, -1, -1};
    int i{0};
    std::string strx = std::to_string(x);
    for (char ch : strx)
    {
        int n = ch - '0';
        for (int j = 0; j < i; j++)
        {
            if (nums[j] == n)
            {
                return false;
            }
        }
        nums[i] = n;
        i += 1;
    }

    return true;
}

int nextBeautifulYear(int x)
{
    for (int i = x + 1;; i++)
    {
        if (beautifulYear(i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int year;
    std::cin >> year;
    std::cout << nextBeautifulYear(year);

    return 0;
}