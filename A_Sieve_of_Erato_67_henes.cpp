#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    //write your logic here

    bool is=false;
    for(int i=0; i<n; i++)
    {
       if(v[i]==67)
       {
        is=true;
       }
       
    }

    if(is) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
}