#include <iostream>
//8

struct dath
{
    int min,
        max,
        inaccuracy,
        maxSpped;
};

int main()
{
    srand(0);

    dath D[5];

    for (int i = 0; i < 5; i++)
    {
        D[i].max = rand() % 101 + 50;
        D[i].min = rand() % 101 - 50;
        D[i].inaccuracy = rand() % 10;
        D[i].maxSpped = rand() % 100 + 50;
    }

    dath theBest = D[0];

    for (int i = 1; i < 5; i++)
        if (theBest.max - theBest.min > D[i].max - D[i].min)
        {
            theBest.max = D[i].max;
            theBest.min = D[i].min;
        }

    std::cout << "min = " << theBest.min << "\nmax = " << theBest.max << "\ninaccuracy = "
        << theBest.inaccuracy << "\nmaxSpped = " << theBest.maxSpped << std::endl;

    return 0;
}