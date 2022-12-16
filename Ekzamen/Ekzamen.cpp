#include <iostream>
#include<Windows.h>
#include<iomanip>
#include <ctime>
using namespace std;

int naim(int arr[5][5], int a)
{

    int k = 999, imax = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i][a] < k)
        {
            k = arr[i][a];
            imax = i;
        }
    }
    return imax;
}
int naib(int arr[5][5], int a)
{
    int k = -100, imin = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i][a] > k)
        {
            k = arr[i][a];
            imin = i;
        }
    }
    return imin;
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int i1, i2, k;
    int Arr[5][5] =
    {
        {-56,   -2, 20,  11,  16},
        {12,    -98, 9,  7,   111},
        {-12,   14, 17, -87, 32},
        {44,    57, 3,  15,  -64},
        {31,    66, -9, 5,   -6}

    };
    cout << "Дано двовимірний масив. У кожному його стовпці знайти: максимальний елемент;\nМінімальний елемент і переставити їх місцями." << endl;
    for (int i = 0; 0 < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << Arr[i][j] << " ";
        cout << " " << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        i1 = naib(Arr, i);
        i2 = naim(Arr, i);
        k = Arr[i1][i];
        Arr[i1][i] = Arr[i2][i];
        Arr[i2][i] = k;
    }
    cout << "================ " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << Arr[i][j] << " ";
        cout << " " << endl;
    }
}