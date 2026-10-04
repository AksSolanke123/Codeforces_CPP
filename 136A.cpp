#include <iostream>

std::string solve(int n, const int arr[])
{
    int solution[n];
    for (int i = 0; i < n; i++)
    {
        solution[arr[i] - 1] = i + 1;
    }
    std::string s;
    for (int i = 0; i < n; i++)
    {
        std::string x = std::to_string(solution[i]);
        s = s + x + ' ';
    }
    return s;
}
int main()
{
    int n;
    std::cin >> n;
    int presents[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> presents[i];
    }

    std::cout << solve(n, presents);

    return 0;
}