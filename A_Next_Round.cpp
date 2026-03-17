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

    int n, k;
    cin >> n >> k;
    vi M(n);
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    int cn = 0;
    int threshold=M[k-1];
    for (int X : M)
    {
        if (X>=threshold && X>0)
        {
            cn++;
        }
    }
    cout << cn << endl;
    return 0;
}
