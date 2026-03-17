#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // logic here

    if (a + b - c == d ||
        a + b * c == d ||
        a - b + c == d ||
        a - b * c == d ||
        a * b + c == d ||
        a * b - c == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
