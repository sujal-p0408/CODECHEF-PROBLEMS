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
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    ll cnt_odd=0;

    for(int i=0;i<n;i++)
{
    if(a[i]%2!=0) cnt_odd++;
}

if(cnt_odd%2!=0)
{
    cout<<"-1"<<endl;
    return;
}
   
   vector<int> a_e;
    vector<int> a_o;
   vector<int> ans;
for(int i=0;i<n;i++)
{
    if(a[i]%2==0)
    a_e.push_back(a_e[i]);

    else  a_e.push_back(a_o[i]);
}
sort(a_e.begin(),a_e.end());
sort(a_o.begin(),a_o.end());
auto it1=a_e.begin();
auto it2=a_e.end();
while(it1<it2)
{
   int ans1= (*it1+*it2)/2;
int ans2= abs(*it1 + *it2)/2;
ans.push_back(ans1);
ans.push_back(ans2);

}
auto it3=a_o.begin();
auto it4=a_o.end();
while(it3<it4)
{
   int ans1= (*it1+*it2)/2;
int ans2= abs(*it1 + *it2)/2;
ans.push_back(ans1);
ans.push_back(ans2);

}

for(auto it= ans.begin();it!=ans.end();it++)
{
    cout<<(*it)<<endl;
}
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}