#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
using namespace std ;

int main()
{
    l n ;
    cin >>n ;
    vector <int> v(n) ;
    for (auto &x : v)
    {
        cin >> x ;
    }
    sort(v.begin(), v.end()) ;
    l max = 0, min =0 ;
    for (int i = 0; i < n/2; i++)
    {
        max += v[n/2 + i] - v[i] ;
        min += v[2*i+1] - v[2*i] ;
    }
    cout << max << " " << min << endl ;

    return 0;
}