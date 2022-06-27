#include <iostream>
//3j

int main()
{
	float X, n, y;

	std::cin >> n >> X;

	y = X;
	
	for (int i = 3; i <= n; i++)
		if(i % 2 == 0)
		y -= pow(X, i) / !(i) ;
		else
			y += pow(X, i) / !(i);
	
	std::cout << y << std::endl;

	return 0;
}