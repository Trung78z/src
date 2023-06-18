def Swap(a,i,j):
    a[i],a[j] = a[j],a[i]
def interchangeSort(a):
    n = len(a)
    for i in range(n-1):
        for j in range(i+1,n):
            if a[i]>a[j]:
                Swap(a,i,j)
def selectionSort(a):
    n = len(a)
    for i in range(n-1):
        tmp = i
        for j in range(i+1,n):
            if a[tmp]>a[j]:
                tmp = j
        Swap(a,tmp,i)  
def bubbleSort(a):
    n = len(a)
    for i in range(n-1):
        for j in  range(n-i-1):
            if a[j-1]>a[j]:
                Swap(a,j-1,j)
def insertionSort(a):
    n = len(a)
    for i in range(1,n):
        pos  =a[i]
        tmp = i
        while tmp>0 and a[tmp-1]>pos:
            a[tmp] = a[tmp-1]
            tmp-=1
        a[tmp] = pos
def Show(a):
    n = len(a)
    print("Sort: ",end='')
    for i in range(n):
        print(a[i], end=' ')
    print("\n")    