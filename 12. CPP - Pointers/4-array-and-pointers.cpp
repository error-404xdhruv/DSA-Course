#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int arr[10] = {2, 4, 6};
    cout << "Address of first element of arr is : " << arr << endl;
    cout << "Address of first element of arr is : " << &arr[0] << endl;

    int *ptr = &arr[0];
    cout << "3rd Element: " << *(ptr + 2) << endl;
    cout << "1st Element + 3 is : " << *ptr + 3 << endl;

    /*
    Important Note:
    int *ptr = arr[0] ;
    then
    arr[i] = *(ptr + i) is same as i[arr] = *(i + arr)
         */

    cout << "3rd Element: " << 2 [arr] << endl;
    cout << "3rd Element: " << *(2 + ptr) << endl;

    return 0;
}