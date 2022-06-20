
#include <stdio.h>
int main()
{
    int a[][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int(*ptr)[4] = a;
    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);
    return 0;
}
