int findUnique(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x = arr[i];
        int count = 0;
        for (int j = i+1; j < size; j++)
        {
            if (x == arr[j])
            {
                count++ ;
            }
        }
        if (count == 0)
        {
            return arr[i] ;
        }
    }
    
}