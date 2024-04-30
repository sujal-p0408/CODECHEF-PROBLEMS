#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
	    std::cin >> n;
	    std::cin >> s;
	    
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	        {
	            flag=flag+0;
	           continue;
	        }
	        else
	        {
	            flag++;
	            
	        }
	}
	if(flag<4)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    std::cout << "NO" << std::endl;
	}
	}
	return 0;
}
