#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	   {
	       cin>>arr[i];
	       sum+=arr[i];
	   }
	   
	   if(sum%n!=0) 
	   {
	       cout<<"NO"<<endl; 
	       
	       }
	       // if total no. of candies can't be distributed among n friends. If remainder remains > 0 then candies remain after distributing also
	       int targetcandy=sum/n;
	       bool possbl= true;
	   
	   for(int i=0;i<n;i++)
	       {
	          if((arr[i]-targetcandy)%2 != 0)     // checked for the power of 2
	         { possbl=false;                  // arr[i]-power of 2 should be equal to target value, we only interchange power of 2 & target value to ensure that it should be power of 2 we take mod of 2
	          break;}
	       }
	       
	  
	   if(possbl) cout<<"Yes"<<endl;
	   
	   else cout<<"No"<<endl;
	   
	}
	return 0;
}
