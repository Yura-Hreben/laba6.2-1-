// Lab 6_2
// спосіб 1
#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

void rand(int n, int a[])
{
    for (size_t i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
}

void arr(int n, int a[])
{
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cout << "Введiть " << i + 1 << "елемент масива: "; cin >> x;
        a[i] = x;
    }
    cout << "\nВивiд масива: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
}

double in(int a[], int n)
{
    int min = 0;//массива в переменные
    int index = 0;
    for (int r = 1; r < n; r++)
    {
        if (a[r] % 2 == 1)
        {
            index += a[r];
            min++;
        }
    }
    return index / min;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int  size;
    int x;
    cout << "Введiть довжину масива "; cin >> size;
    int* a = new int[size];

    cout << "\nЯкщо хочете ввести значення масиву самi введiть '1', якщо нi тодi iнше число "; cin >> x;

    if (x == 1)
    {
        arr(size, a);
    }
    else
    {
        cout << "\nв масив записуються числа вiд 1 до 100 ";
        cout << "\narray: ";  rand(size, a);
    }
    cout << "\n Середнє арифметичне: " << in(a, size);
    delete[] a;
    return 0;
}