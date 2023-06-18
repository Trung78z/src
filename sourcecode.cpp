#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdio.h>
using namespace std;

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
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
int main()
{
    int a[]{2, 3, 4, 6, 8, 4, 2, 1, 8};
    int n = sizeof(a) / sizeof(a[0]);
    print(a, n);
    cout << endl;
    // InsertionSort(a, n);
    SelectionSort(a, n);
    print(a, n);
    return 0;
}