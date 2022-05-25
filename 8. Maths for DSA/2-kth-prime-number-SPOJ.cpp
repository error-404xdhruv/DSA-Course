
// https://www.spoj.com/problems/TDKPRIME/

#include <bits/stdc++.h>
#define l long long
#define vl vector<long long>
#define vi vector<int>
#define vp vector<vector<int>>
using namespace std;

l doAlgo(l index)
{
    l n = 5000000;
    l primes[n];
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (l i = 2; i < n; i++)
    {
        if (prime[i])
        {
            for (l j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    l count = 1;
    for (l i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            primes[count] = i;
            count++;
        }
    }
    return primes[index] ;
}

int main()
{
    l q;
    cin >> q;
    while (q--)
    {
        l a;
        cin >> a;
        cout << doAlgo(a) << endl;
    }

    return 0;
}