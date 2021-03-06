#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = (int *)(&a + 1);
    printf("%d %d", *(a + 1), *(ptr - 1));
    return 0;
}

/*
Since compilers convert array operations in pointers before accessing the array elements, (a+1) points to 2.

The expression (&a + 1) is actually an address just after end of array ( after address of 5 ) because &a contains address of an item of size 5*integer_size and when we do (&a + 1) the pointer is incremented by 5*integer_size.

ptr is type-casted to int * so when we do ptr -1, we get address of 5

*/