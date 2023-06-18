#include <iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void InterchangeSort(int *a, int n)
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

void selectionSort(int *a, int n)
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
void bubbleSort(int *a, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (a[j - 1] > a[j])
            {
                Swap(&a[j], &a[j - 1]);
            }
        }
    }
}
void insertionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = a[i];
        int tmp = i;
        while ((tmp > 0) && (a[tmp - 1]) > pos)
        {
            a[tmp] = a[tmp - 1];
            tmp -= 1;
        }
        a[tmp] = pos;
    }
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
