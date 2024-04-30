#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define MyCustomSettings ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

const int mod = 1e9 + 7;

void solve()
{
    ll n;
    cin>>n;
    ll a[n],ac[n],b[n],bc[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) cin>>ac[i];
    for(int i=0;i<n;i++) cin>>bc[i];

    unordered_map<int,vector<int>> ciB;

    for(int i=0;i<n;i++) ciB[bc[i]].push_back(i);

    for(int i=0;i<n;i++)
    {
        if(ac[i]!=bc[i])
        {
            int color=ac[i];
            if(ciB[color].empty())
            {
cout<<"No"<<endl;
return;
            }

            int j=ciB[color].back();
            ciB[color].pop_back();

            swap(a[i],b[j]);
        }
    }

    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            cout<<"No"<<endl;
            return;
        }
    }

    cout<<"Yes"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}