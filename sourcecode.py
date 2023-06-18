def Swap(a,i,j):
    a[i],a[j] = a[j],a[i]
def interchangeSort(a):
    n = len(a)
    for i in range(n-1):
        for j in range(n):
            if a[i]>a[j]:
                Swap(a,i,j)
def Show(a):
    n = len(a)
    for i in range(n):
        print(a[i], end=' ')
a = [2,3,5,7,4,2]
interchangeSort(a)
Show(a)