#include <iostream>
#include <string>

std::string line(int n, int t, std::string s)
{
    char line[n];
    int j{0};
    for (char ch : s)
    {
        line[j] = ch;
    }
    if (t > 0)
    {
        for (int i = 0; i <= n - 1; i++)
        {

            if (line[i] == 'B' and line[i + 1] == 'G')
            {
                char temp;
                temp = line[i];
                line[i] = line[i + 1];
                line[i + 1] = temp;
            }
            t -= 1;
        }
    }
    std::string finalline{""};
    for (int i = 0; i <= n; i++)
    {
        finalline += line[i];
    }

    return finalline;
}
int main()
{
    int n, t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;

    std::cout << line(n, t, s);

    return 0;
}