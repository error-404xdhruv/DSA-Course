#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // (&arr + 1) is used to denote the address of box just after the end of the arr and we have to typecase it into int
    int *ptr = (int *)(&arr+1);
    cout << *(ptr - 1) << endl;

    return 0;
}