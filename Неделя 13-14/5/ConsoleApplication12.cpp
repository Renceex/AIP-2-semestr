#include <iostream>
#include <ctime>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n = 0;
    printf("Введите n: ");
    cin >> n;
    int summ1 = 0;
    int summ2 = 0;
    int* Mas = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        Mas[i] = (rand() % 100);
        if (Mas[i] % 2 == 0)
        {
            summ1 = summ1 + Mas[i];
        }
        else
        {
            summ2 = summ2 + Mas[i];
        }
        printf("%d ", Mas[i]);
    }
    printf("\n");
    printf("Сумма четных: %d \n", summ1);
    printf("Сумма нечетных: %d \n", summ2);
}