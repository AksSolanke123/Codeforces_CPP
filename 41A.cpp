#include <iostream>
#include <string>

int main()
{
    std::string word1, word2;
    std::cin >> word1;
    std::cin >> word2;

    std::string y;
    for (int i = word2.length() - 1; i >= 0; --i)
    {
        y += word2[i];
    }

    if (word1 == y)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}
