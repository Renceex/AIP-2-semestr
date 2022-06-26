#include <iostream>
#include <cmath>
using namespace std;
//11

int main()
{
	double a, b, c,max,min;

	std::cout << "Enter a, b, c :\n";
	std::cin >> a >> b >> c;
	max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	
	std::cout << "Max:" <<  max + 5 << std::endl;
	std::cout << "Min:" << min - 3 << std::endl;
	return 0;



}