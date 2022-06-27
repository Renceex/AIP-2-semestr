#include <iostream>
#include <array>
//1H   


int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 100; i++)
		M[i] = rand() % 101 ;

	for (int i = 0; i < 100; i++)
		std::cout << M[i] << ' ';

	return 0;
}