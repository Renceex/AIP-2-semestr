#include <iostream>
#include <cmath>
//1j

int main()
{
    int x;

    std::cout << "X = ";
    std::cin >> x;

    if (x > 3)
        std::cout << "y = " << 2 * x - 10 << std::endl;
    else if (x < 3)
        std::cout << "y = " << pow( 2 * x + 1,2) - 1 << std::endl;
    else std::cout << "y = 10" << std::endl;

    return 0;
}