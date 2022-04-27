
// https://www.codingninjas.com/codestudio/problems/pair-sum_697295?leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

void findSum(int array[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (array[i] + array[j] + array[k] == sum)
                {
                    cout << array[i] << " " << array[j] << " " << array[k] << endl;
                    array[i] = INT_MIN;
                    array[j] = INT_MIN;
                    array[k] = INT_MIN;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int array[1000];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        int sum;
        cin >> sum;
        findSum(array, n, sum);
    }

end:
    return 0;
}