
// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
// Duplicate In Array

#include <iostream>
using namespace std ;

void doWork()
{
    int arr[100000];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i] ;
    }
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>1)
        {
            cout << arr[i] << endl;
            break;
        }
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        doWork();
    }
    
    return 0;
}