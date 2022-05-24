
// Approach 1 :
// Square Root Method

/* class Solution
{
public:
    bool isPrime (long long n)
    {
        for (long long i = 2; i*i < n; i++)
        {
            if (n%i==0)
            {
                return false ;
            }
            
        }
        return true ;
    }
    int countPrimes(int n)
    {
        long long count = 0;
        for (long long i = 2; i < n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        return count ;
    }
}; */


// Approach 2
// Sieve of Eratosthenes

