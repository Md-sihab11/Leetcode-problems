#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define A vector<int>

int main()
{
    int n;
    cin >> n;

    A M(n);
    A M2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> M2[i];
    }

    sort(M.begin(), M.end());
    sort(M2.begin(), M2.end());
    
    bool F = true;
    for (int i = 0; i < n; i++)
    {
        if (M[i] != M2[i])
        {
            F = false;
        }
    }
    if (F)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
