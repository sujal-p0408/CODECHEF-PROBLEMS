// Update the program below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
   int X, Y, Z;
   cin>>X>>Y>>Z;    
   
   if(Z%X==0 && Z%Y!=0)
 {
     std::cout << "CHICKEN" << std::endl;
 }
 else if(Z%Y==0 && Z%X!=0)
 {
    std::cout << "DUCK" << std::endl; 
 }
 else if(Z%Y==0 && Z%X==0)
 {
    std::cout << "ANY" << std::endl; 
 }
 else 
 {
    std::cout << "NONE" << std::endl; 
 }
 
  
  }
return 0;
}
