
// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540?leftPanelTab=1
// Solution Code

bool isPossible(vector<int>arr, int n, int m, int mid)
{
	int studentCount = 1 ;
	int pageSum = 0;
	
	for(int i =0; i<n; i++)
	{
		if(pageSum+arr[i]<=mid)
		{
			pageSum += arr[i] ;
		}
		else
		{
			studentCount++ ;
			if(studentCount>m || arr[i]>mid)
			{
				return false ;
			}
			pageSum = arr[i] ;
		}
	}
	return true ;
}

int allocateBooks(vector<int> arr, int n, int m)
{
	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		sum += arr[i] ;
	}
	int s= 0, e = sum ;
	int ans = -1 ;
	while (s<=e)
	{
		int mid = s+(e-s)/2 ;
		if(isPossible(arr, n, m ,mid))
		{
			ans = mid ;
			e =mid-1 ;
		}
		else
		{
			s = mid+1 ;
		}
	}
	return ans ;
}