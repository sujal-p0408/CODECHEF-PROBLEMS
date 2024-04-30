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
  
  else if((X+1)%3==0)
  {
      std::cout << "1" << std::endl;
  }
  else
  {
      std::cout << "2" << std::endl;
  }
 }
return 0;
}
