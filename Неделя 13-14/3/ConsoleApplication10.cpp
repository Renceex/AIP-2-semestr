﻿#include <iostream>
//10
using namespace std;

int main()
{
    int size;
    int* arr;

    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        if (arr[i] < 0)
            arr[i] = 0;

    return 0;
}
