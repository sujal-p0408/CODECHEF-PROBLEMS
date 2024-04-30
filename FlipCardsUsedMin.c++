//  Update the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 int t;
 cin>>t;
 while(t--)
 {
    int N, X;
    cin>>N>>X;
    std::cout << min(X,N-X) << std::endl;

 }
return 0;
}