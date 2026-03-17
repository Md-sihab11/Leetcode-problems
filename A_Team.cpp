#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>

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

    int cn = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            cn++;
        }
    }
    cout << cn << endl;
    return 0;
}
