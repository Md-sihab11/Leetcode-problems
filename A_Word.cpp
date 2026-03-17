#include <bits/stdc++.h>
using namespace std;

#define end '\n'

int main()
{
    string s;
    cin >> s;

    int cn = 0, x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cn++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            x++;
        }
    }
    if (cn > x)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s << end;
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << end;
    }
}