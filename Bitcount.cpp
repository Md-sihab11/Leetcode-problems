#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;

    // cout << bitset<4>(n) << endl;
    string binary = "";

    while (n > 0)
    {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }
    cout << binary << endl;
    return 0;
}
