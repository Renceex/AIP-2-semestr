#include <iostream>
#include <cmath>
//2h

int main()
{
    int a, b, c, d, h ;

    std::cout << "Enter a, b, c, d, h :";
    std::cin >> a >> b >> c >> d >> h  ;

    std::cout << "S = " << 0.5 * h * (a+b) << std::endl;

    std::cout << "P = " << a + b + c + d << std::endl;

    return 0;
}
