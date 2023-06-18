#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;
void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void InsertionSort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                Swap(&a[i], &a[j]);
            }
        }
    }
}

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}

int main()
{
    int a[]{2, 3, 4, 6, 8, 4, 2, 1, 8};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    cout<<endl;
    InsertionSort(a, n);
    print(a, n);
    return 0;
}