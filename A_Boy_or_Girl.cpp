#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    sort(name.begin(), name.end());

    int count = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (i == 0 || name[i] != name[i - 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}