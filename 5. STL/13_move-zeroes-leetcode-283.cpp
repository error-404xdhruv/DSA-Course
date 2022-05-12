#include <bits/stdc++.h>
using namespace std ;

int main()
{
    vector <int> arr ;
    int n ;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a ;
        arr.push_back(a) ;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            swap(arr[i], arr[i+1]) ;
        }
        else
        {
            continue;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;

    return 0;
}