#include <iostream>
#include <cmath>
//3Б

int main()
{
    float x, y;

    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Y = ";
    std::cin >> y;

    float R = sqrt(pow(x, 2) + pow(y, 2)) >= 1;

    if ( y <= x/2 && x<= 2*y && R)
        std::cout << "Hit";
    else
        std::cout << "missed";

    return 0;
}