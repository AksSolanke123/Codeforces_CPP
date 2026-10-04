#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    s = "";

    for (int i = 1; i <= n; i++)
    {
        if (i <= n - 1)
        {
            if (i % 2 == 1)
            {
                s += "I hate that ";
            }
            else
            {
                s += "I love that ";
            }
        }
        else
        {
            if (i % 2 == 1)
            {
                s += "I hate it";
            }
            else
            {
                s += "I love it";
            }
        }
    }

    std::cout << s;
}
