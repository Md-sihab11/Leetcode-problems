// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


//prefix sum bole ata ke 

int main()
{
    // Write C++ code here
    int n, q;
    cin >> n >> q;

    long long arr[n + 1];
    long long prefix[n + 1];

    prefix[0] = 0;  

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
    return 0;
}