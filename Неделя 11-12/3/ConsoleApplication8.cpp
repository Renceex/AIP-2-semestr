#include <iostream>
//3    

struct robot
{
	float dimensions;
	float weight;
	float maximumSpeed;
};

int main()
{
	srand(0);

	robot R[5];

	for (int i = 0; i < 5; i++)
	{
		R[i].dimensions = rand() % 51 + 50;
		R[i].weight = rand() % 101 + 50;
		R[i].maximumSpeed = rand() % 41 + 10;
	}

	robot TheLittle = R[4];

	for (int i = 1; i < 5; i++)
		if (R[i].dimensions < TheLittle.dimensions)
			TheLittle = R[i];

	std::cout << "dimensions: " << TheLittle.dimensions
		<< "\nweight: " << TheLittle.weight
		<< "\nmaximumSpeed: " << TheLittle.maximumSpeed << std::endl;

	return 0;
}