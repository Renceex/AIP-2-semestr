#include <iostream>
//9H

int main()
{
    int nap;
    float x;

    std::cout << "1)гигакалорий в минуту\n"
        "2)калорий в час\n"
        "3)'джоуль в час'  в 'эрг в секунду' \n"
        "Введите Направление Перевода: ";
    std::cin >> nap;

    std::cout << "Введите число: ";
    std::cin >> x;

    std::cout << "Результат Перевода: ";

    switch (nap)
    {
    case 1:
        std::cout << x * 60000000000;
        break;
    case 2:
        std::cout << x * 4.187;
        break;
    case 3:
        std::cout << x * 2778;
    default:
        std::cout << "Error";
        break;
    }

    std::cout << std::endl;

    return 0;
};