#include <iostream>
#include <cmath>
//2З

int main()
{
    float x, y;

    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Y = ";
    std::cin >> y;

    float R = sqrt(pow(x, 2) + pow(y, 2)) >= 1;

    if (x <= -y - 1 && y <= 1 && R)
        std::cout << "Hit";
    else
        std::cout << "missed";

    return 0;
}