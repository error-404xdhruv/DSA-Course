#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int>
#define v2d vector<vector<int>>
#define vpp vector<pair<int, int>>
using namespace std ;

bool custom (const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second <= b.second) ;
}

int main()
{
    int n;
    cin >> n ;
    int f, s ;
    vpp a ;
    for (int i = 0; i < n; i++)
    {
        cin >> f >> s ;
        a.push_back(make_pair(f, s)) ;
    }
    sort (a.begin(), a.end(), custom) ;
    int count = 1; 
    for (int i = 1; i < n; i++)
    {
        if (a[i].first >= a[i-1].second)
        {
            count++ ;
        }
        
    }
    cout << count << endl ;

    return 0;
}