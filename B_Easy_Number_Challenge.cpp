#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxval = 1000001;
const int mod = 1073741824;

int divisors[maxval];

void precompute()
{
    for (int i = 1; i < maxval; i++)
    {
        for (int j = i; j < maxval; j+=i)
        {
            divisors[j]++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int a, b, c;
    cin >> a >> b >> c;

    ll sum = 0;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                int product = i * j * k;
                sum = (sum + divisors[product]) % mod;
            }
        }
    }

    cout << sum << endl;
}