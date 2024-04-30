#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100];
     int midonei=3;
    int midonej=3;
    int r=0;
    int c=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
           {
            r=i;
            c=j;
           
           }
        }
    }


    int res= abs(r-3) + abs(c-3);
    cout<<res<<endl;
}