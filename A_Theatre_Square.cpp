#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define A vector<int>

void solve()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long h = ((n + a - 1) / a);
    long long w = ((m + a - 1) / a);

    cout << h * w << endl;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
}
