#include <iostream>
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

void SelectionSort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int tmp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[tmp] > a[j])
            {
                tmp = j;
            }
        }
        Swap(&a[i], &a[tmp]);
    }
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
