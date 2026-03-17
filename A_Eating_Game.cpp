#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> V(n);

        for (int i = 0; i < n; i++)
        {
            cin >> V[i];
        }

        // check
        int max = V[0];
        for (int i = 0; i < n; i++)
        {
            
                if (V[i] > max)
                {
                    max = V[i];
                }
            
        }

        int cn=0;
        for(int x:V)
        {
            if(max==x)
            {
                cn++;
            }
        }

        cout<<cn<<endl;
    }
}