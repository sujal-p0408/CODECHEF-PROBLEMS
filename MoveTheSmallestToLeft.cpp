#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int smallest=arr[0];
        int SmallestIndex=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<smallest)
            {
                smallest=arr[i];
                SmallestIndex=i;
            }
            int temp=arr[0];
        arr[0]=arr[SmallestIndex];
        arr[SmallestIndex]=temp;

        }

        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
} 
