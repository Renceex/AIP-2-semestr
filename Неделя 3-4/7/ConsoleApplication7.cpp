#include <iostream>
//3 D

int main()
{
	float X, n, y = 0;

	std::cin >> n >> X;

	for (int i = 1; i <= n; i++)
		if (i > 1)
			y += 1 / (i + 1) * i;
		else
			y += 1 / i;



	std::cout << y << std::endl;

	return 0;
}