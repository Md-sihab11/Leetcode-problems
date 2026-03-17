#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define A vector<int>

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g,c,l;
    cin >> g>>c>>l;

    int mx = max({g,c,l});
    int mn = min({g,c,l});

    int sum = mx-mn;

    if(sum>=10) cout<<"check again"<<endl;

    else{
        int median = g + c + l - mx - mn;
        cout << "final " << median << endl;
    }

    
}
