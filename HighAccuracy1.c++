// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
  int X,Y;
  cin>>X;
  
  if(X%3==0)
  {
      cout<<"0"<<endl;
  }
  
  else 
 { Y=X/3+1;
  cout<<3*Y-X<<endl;
 }
 
  } 
return 0;
}
