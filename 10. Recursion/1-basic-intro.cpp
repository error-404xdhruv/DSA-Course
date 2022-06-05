#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

int count = 0;

void print()
{
    ::count++;
    if (::count > 5)
    {
        return;
    }
    cout << ::count << " ";
    print();
}

int main()
{
    print();

    return 0;
}