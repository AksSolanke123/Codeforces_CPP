#include <iostream>
#include <string>

int stones(std::string s, int x)
{
    char color[x];
    char temp;
    int i{0};
    int count{0};
    for (char ch : s)
    {
        color[i] = ch;
        if (i > 0)
        {
            if (color[i - 1] == ch)
            {
                count += 1;
            }
        }
        i += 1;
    }
    return count;
}
int main()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    std::cout << stones(s, n);

    return 0;
}