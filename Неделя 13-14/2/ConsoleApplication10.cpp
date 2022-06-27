#include <iostream>
#include <array>
//2 b

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 21; i++)
		M[i] = rand() % 22;

	int sum = 0;

	for (int i = 0; i < 21; i++)
		if (M[i] > 9)
			sum += M[i];

	std::cout << "amount > 9 = " << sum;

	sum = 0;

	for (int i = 0; i < 21; i++)
		if (M[i] < 20)
			sum += M[i];

	std::cout << "\namount < 20 = " << sum;

	sum = 0;

	for (int i = 0; i < 21; i++)
		if (M[i] < 3)
			sum += M[i];

	std::cout << "\namount < 3 = " << sum;

	return 0;
}