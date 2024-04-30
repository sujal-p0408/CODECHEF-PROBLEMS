#include <iostream>
using namespace std;
int withdraw(int arr[],int n,int k)
{
    while(k--)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                k=k-arr[i];
                return 1;
            }
            else
            return 0;
        }
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	      cin>>arr[i];  
	    }
	    withdraw(arr,n,k);
	}
	
	return 0;
}
