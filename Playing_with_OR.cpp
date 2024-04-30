#include <iostream>
using namespace std;
int solve()
{
   
}

int main() {
	// your code goes here
	int t;
    cin>>t;

	while(t--)
	{
         long long  n,k;
	    cin>>n>>k;
	    long long arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];

	    long long count=0;
	    for(int i=0;i<=n-k;i++)
	    {int curr_num=arr[i];
	        for(int j=i+1;j<i+k;j++)
            {
             curr_num = curr_num|arr[j];
            }
            if((curr_num & 1) == 1)  count++;
	    }
        
	    cout<<count<<endl;
	}
	return 0;
}
