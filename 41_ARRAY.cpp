
#include <iostream>
#include <cstdio>
using namespace std ;

int main(int argc, char const *argv[])
{
    int array[100] = {1, 2, 3};
    cout << array[5] << endl ;

    // initializing an entire array with zero
    int custom[100] = {} ; // or can write int custom[100] = {0} ;
    cout << custom[99] << endl ;

    // We can also use for loop to initialize an array with the same value (like if we want 1 or some other value in place of 0)

    // finding length of an array
    cout << "Length of custom is: " << sizeof(custom)/sizeof(int) << endl ;
    return 0;
}