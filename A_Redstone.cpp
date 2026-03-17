

/*Bismillah hirrahmanir rohim*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    bool poss = 0;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[i - 1])
        {
            poss = 1;
            break;
        }
    }

    if (poss)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}