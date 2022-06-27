#include <iostream>
//16 B

int main()
{

	int i, max, t;

	std::cout << "initial value = ";
	std::cin >> i;

	std::cout << "final value = ";
	std::cin >> max;

	std::cout << "tab step = ";
	std::cin >> t;

	for ( i < max; i += t)
	{
		if (i > 3)
			std::cout << "y = " << 5 * i - 10;
		else if (i < 3)
			std::cout << "y = " << 2 * abs(i) - 5;
		else
			std::cout << "y = 1";

		std::cout << y <<  std::endl;
	}

	return 0;
}