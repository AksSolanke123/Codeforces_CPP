#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    for (char ch : s)
    {
        if (ch == 'H' || ch == 'Q' || ch == '9')
        {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
}