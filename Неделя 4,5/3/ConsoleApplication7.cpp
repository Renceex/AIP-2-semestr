#include <iostream>
#include <cmath>
//1a

int main()
{
    int x;

    std::cout << "X = ";
    std::cin >> x;

    if (x > 0)
        std::cout << "y = " << 2 * x - 10 << std::endl;
    else if (x < 0)
        std::cout << "y = " <<  2 * abs(x) - 1 << std::endl;
    else std::cout << "y = 0" << std::endl;

    return 0;
}