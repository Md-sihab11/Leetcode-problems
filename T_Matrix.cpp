#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //vector<vector<int>> v(n, vector<int>(n));
    int v[n][n];

        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
        }

    // logic

    int pdia = 0;
    int secdia = 0;

    for (int m = 0; m < n; m++)
    {
        pdia = pdia + v[m][m];
        secdia = secdia + v[m][n-1-m];

    }

    int Abs = abs(pdia - secdia);

    cout << Abs << endl;
}