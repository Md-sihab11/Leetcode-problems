
/*Bismillah hirrahmanirrohim*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    int a, b;
    cin >> a >> b;

    if (abs(a - b) <= 1 && (a + b > 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
