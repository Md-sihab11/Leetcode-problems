#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>

void solve()
{
    int x, y;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int a;
            cin >> a; //each line takes 5 inputs

            if (a == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int operation = abs(x - 3) + abs(y - 3);

    cout << operation << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}