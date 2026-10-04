#include <iostream>
#include <string>
using namespace std;

int main()
{
    string guest, host, shuffled;
    cin >> guest;
    cin >> host;
    cin >> shuffled;
    string combined{guest + host};
    int freq[26] = {0};
    for (char ch : combined)
    {
        freq[ch - 'A']++;
    }
    for (char ch : shuffled)
    {
        freq[ch - 'A']--;
    }
    bool answer{true};
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            answer = false;
        }
    }
    if (answer)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
