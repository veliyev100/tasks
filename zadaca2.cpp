#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

void function(std::vector<std::vector<double>> &pair)
{
    int laa = pair.size();
    for(int i = 0; i < laa; i++)
    {
        pair[i][2] = sqrt(pair[i][0] * pair[i][0] + pair[i][1] * pair[i][1]);
    }
    std::sort(pair.begin(), pair.end(), [](const std::vector<double>& a, const std::vector<double>& b) {
        return a[2] < b[2];
    });
    for(int i = 0; i < laa; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << pair[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::vector<double>> pair (n, std::vector<double>(3));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            pair[i][j] = 15 - i - j;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << pair[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n\n";

    function(pair);

    return 0;
}
