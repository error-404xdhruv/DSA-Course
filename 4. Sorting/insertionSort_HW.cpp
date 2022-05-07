#include <bits/stdc++.h>
using namespace std ;

void insertionSort (int arr[], int n)
{
    int j, key ;
    for (int i = 1; i < n; i++)
    {
        j = i-1 ;
        key = arr[i] ;

        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j] ;
            j-- ;
        }
        arr[j+1] = key ;
    }
    
}

void printArr (int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << "\n" ;
}

int main()
{
    int arr[] = {4, 12, 11, 20} ;
    int n = sizeof(arr)/sizeof(int) ;

    insertionSort(arr, n) ;
    cout << "Sorted Array: " ;
    printArr(arr, n) ;

    return 0;
}