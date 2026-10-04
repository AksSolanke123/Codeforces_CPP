#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char temp{0};
    bool allCaps{true};
    bool allSmall{true};
    bool firstSmall{false};
    int i{0};
    for (char ch : s)
    {
        if (int(ch) >= 97 and int(ch) <= 122)
        {
            allCaps = false;
        }
        if (int(ch) >= 65 and int(ch) <= 90)
        {
            allSmall = false;
        }
        if (i == 0)
        {
            if (int(ch) >= 97 and int(ch) <= 122)
            {
                firstSmall = true;
            }
        }
        if (i > 0)
        {
            if (int(ch) >= 97 and int(ch) <= 122)
            {
                firstSmall = false;
            }
        }
        i += 1;
    }
    string output{""};
    if (allCaps == true)
    {
        for (char ch : s)
        {
            temp = ch + 32;
            output += temp;
        }
        cout << output;
    }
    else if (firstSmall == true)
    {
        int x{0};
        for (char ch : s)
        {
            if (x == 0)
            {
                temp = ch - 32;
                output += temp;
            }
            else
            {
                temp = ch + 32;
                output += temp;
            }
            x += 1;
        }
        cout << output;
    }
    else
    {
        cout << s;
    }
}