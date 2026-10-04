#include <iostream>
#include <string>
using namespace std;

int sumOfFaces(string arr[], int n)
{
    int x{0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "Tetrahedron")
        {
            x += 4;
        }
        if (arr[i] == "Cube")
        {
            x += 6;
        }
        if (arr[i] == "Octahedron")
        {
            x += 8;
        }
        if (arr[i] == "Dodecahedron")
        {
            x += 12;
        }
        if (arr[i] == "Icosahedron")
        {
            x += 20;
        }
    }
    return x;
}
int main()
{
    int n;
    cin >> n;

    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << sumOfFaces(s, n);
}