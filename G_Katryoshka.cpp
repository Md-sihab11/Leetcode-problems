
/*Bismillah hirrahmanirrohim*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;

    cout << min(k, min(n, (n + m) / 2));

    return 0;
}
