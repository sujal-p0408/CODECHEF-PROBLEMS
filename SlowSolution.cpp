#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

   while(t--)
   {
    int count=0;
    int maxT,maxN,sumN;
    cin>>maxT>>maxN>>sumN;
    while(maxN==sumN)
   {
    maxT++;
    count++;
   }
   cout<<count*(maxT)*(maxT);
   } 
} 
