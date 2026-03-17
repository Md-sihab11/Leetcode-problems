#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    double x, p;
    cin >> x >> p;
    double res1 = 100-x;

    double res2 = p*100;

    double res3= res2/res1;

    cout << fixed << setprecision(2) << res3 << endl;

    return 0;
}