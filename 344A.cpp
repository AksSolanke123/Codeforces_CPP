#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string temp;
    temp = a[0];
    int count{0};
    for (int i = 0; i < n; i++)
    {
        if (temp != a[i])
        {
            count += 1;
        }
        temp = a[i];
    }

    cout << count + 1;
}