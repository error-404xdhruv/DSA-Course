
// Reverse Array
#include <iostream>
#include <cstdio>
using namespace std ;

void reverseArray(int array[] , int size)
{
    int start = 0, end = size-1;
    while (start <= end)
    {
        swap(array[start], array[end]) ;
        start++ , end-- ;
    }
}

int main(int argc, char const *argv[])
{
    int array[100] = {1, 2, 3, 4, 5, 6};
    int array2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    cout << "Original Array: " << "\n" ;
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " " ;
    }
    cout << "\n" ;
    reverseArray (array, 6) ;
    cout << "Reversed Array: " << "\n" ;
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " " ;
    }
    reverseArray(array2, 9) ;
    cout << "Reversed Array: " << "\n" ;
    for (int i = 0; i < 9; i++)
    {
        cout << array2[i] << " " ;
    }
    return 0;
}