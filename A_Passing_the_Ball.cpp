#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define A vector<int>

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<int> visited;

    int current_student = 0;
    visited.insert(current_student);

    for (int i = 0; i < n; i++)
    {
        if (s[current_student] == 'R')
        {
            current_student++;
        }
        else
        {
            current_student--;
        }
        visited.insert(current_student);
    }

    cout<<visited.size()<<endl;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
