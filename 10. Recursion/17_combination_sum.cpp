// https://www.geeksforgeeks.org/combinational-sum/?ref=gcse
// Medium Level Problem on LeetCode
#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define v2 vector<vector<int>>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    // since we have to return the subsequences in non-decreason order we should first sort the array
    sort(arr.begin(), arr.end());

    //  since we have been asked for unique subsequences then we should also remove all the duplicates
    vector<int>::iterator it;
    it = arr.begin();
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            arr.erase(it + i);
            i--;
        }
    }

    

    return 0;
}