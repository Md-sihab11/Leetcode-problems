#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define V vector<int>
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        V M(n);
        for(int i=0; i<n; i++)
        {
            cin>>M[i];
        }

        ll ans=1;
        ll cn =1;

        for(int i=1; i<n; i++)
        {
            if(M[i] >= M[i-1])
            {
                cn++;
            }else{
                cn=1;
            }
            ans=ans+cn;
        }

        cout<<ans<<endl;
    }

}