#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define vec vector<long long>

void solve()
{
    long long n;
    cin >> n;

    vec a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    stack<int> max;

    int current_max = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>=current_max)
        {
            current_max=a[i];
            count++;
        }
    }

    cout<<count<<endl;
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
