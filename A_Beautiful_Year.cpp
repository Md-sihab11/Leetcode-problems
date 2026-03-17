
/*Chasing to learn, not proving to showing*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>

int main()
{
    int y;
    cin >> y;

    for (int year = y + 1;; year++)
    {
        string s = to_string(year);
        set<char> yr(s.begin(), s.end());
        if (s.size() == yr.size())
        {
            cout << year << endl;
            break;
        }
    }
}