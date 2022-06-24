#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

void printSubsequences(vi arr, int index, vi &subarr, int n)
{
    if (index == n)
    {
        for (auto x : subarr)
        {
            cout << x << " ";
        }
        if (subarr.size() == 0)
        {
            cout << "{ }";
        }
        cout << "\n";

        return;
    }
    else
    {
        subarr.push_back(arr[index + 1]);

        printSubsequences(arr, index + 1, subarr, n);

        subarr.pop_back();
        printSubsequences(arr, index + 1, subarr, n);
    }
}

int main()
{
    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vi subarr;
    // according to the recursion tree, we would start from index 0
    printSubsequences(v, 0, subarr, n);

    return 0;
}