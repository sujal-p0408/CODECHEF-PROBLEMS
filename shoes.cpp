#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,m,n,x;
int flag=0;

while(t--)
{
    cin>>n>>m;

    if(m>=n)
    {
       x=n;
    } 
    else
    {
       while(m==n)
       {
        flag+=1;
        m++;
       }
       x=n+flag;  
    }
cout<<x<<endl;
}
}