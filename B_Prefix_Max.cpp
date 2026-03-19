
/*Prefix Max*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define vec vector<int>

void solve()
{
    int n;
    cin >> n;

    vec a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    // writie logic here

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[0] < a[j])
            {
                swap(a[0], a[j]);
            }
        }
    }

    // max sum find ...
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]>=a[j])
            {
                sum =sum+a[0];
            }
        }
        break;
    }
    cout<<sum<<endl;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
