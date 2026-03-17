

/*Bismillah hirrahmanir rohim
 Today 16/3/26  */
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // write logic here

    sort(arr.begin(), arr.end());

    long long cur = arr[0];

    for (int i = 1; i < n; i++)
    {
        cur = (cur + arr[i]) / 2;
    }

    cout << cur << endl;
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