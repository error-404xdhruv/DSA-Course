
#include <iostream>
#include <cstdio>
using namespace std ;

bool yesNo (int array[], int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (x == array[i])
        {
            return 1;
        }
    }
    return 0 ;
}
int findIndex (int array[], int elem)
{
    int index = 0;
    for (int i = 0; i < 10; i++)
    {
        if (elem == array[i])
        {
            index = i ;
        }
    }
    return index ;
}

int main(int argc, char const *argv[])
{
    int array[10]  = {1, -1, 2, 4, 6, 200, -110209, 12, 15, 1653} ;
    cout << "Enter the element you want to search for: ";
    int element ;
    cin >> element ;
    if (yesNo(array, element))
    {
        cout << "Yes, present at Index: " << findIndex(array, element) << endl;
    }
    else
    {
        cout << "Not present" << endl ;
    }

    return 0;
}