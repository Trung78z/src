#include "Sort.h"
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