#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *ptr = (int *)malloc(5 * sizeof(int));

    for (i = 0; i < 5; i++)
        *(ptr + i) = i;

    printf("%d ", *ptr++);
    printf("%d ", (*ptr)++);
    printf("%d ", *ptr);
    printf("%d ", *++ptr);
    printf("%d ", ++*ptr);
}

/*
We can apply the above two rules to guess all

*ptr++ is treated as *(ptr++)

*++ptr is treated as *(++ptr)

++*ptr is treated as ++(*ptr)
*/