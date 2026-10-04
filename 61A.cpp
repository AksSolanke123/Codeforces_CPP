#include <iostream>
#include <string>

int main()
{
    std::string num1, num2;
    std::cin >> num1;
    std::cin >> num2;

    int n1[num1.length()];
    int n2[num2.length()];

    int j{0};
    for (char ch1 : num1)
    {
        n1[j] = ch1;
        j += 1;
    }
    j = 0;
    for (char ch2 : num2)
    {
        n2[j] = ch2;
        j += 1;
    }

    std::string s{""};
    for (int i = 0; i < num1.length(); i++)
    {
        if (n1[i] == n2[i])
        {
            s += '0';
        }
        else
        {
            s += '1';
        }
    }
    std::cout << s;
}