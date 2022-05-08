#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};
    int size = a.size();

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n" ;
    cout << "Element at index 2 --> " << a.at(2) << endl;

    cout << "Is the array empty ? " << a.empty() << endl;

    cout << "First Element : " << a.front() << endl;
    cout << "Last Element : " << a.back() << endl;

    return 0;
}