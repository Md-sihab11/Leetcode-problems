#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    int exist;
    cin >> exist;
    bool f = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == exist)
            {
                f = true;
                break;
            }
        }
        if (f)
            break;
    }

    if (f)
        cout << "will not take number";
    else
        cout << "will take number";

    return 0;
}