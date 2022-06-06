#include <bits/stdc++.h>
#define l long long
#define vl vector<long long> 
#define vi vector<int> 
#define vp vector<vector<int>> 
using namespace std ;

void reverse(vi v, int s, int e)
{
    if (s>e)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " " ;
        }
        return ;
    }
    swap(v[s], v[e]) ;
    reverse(v, s+1, e-1) ;
}

int main()
{
    vi v = {1, 2, 3, 4, 5} ;
    reverse (v, 0, v.size()-1) ;

    return 0;
}