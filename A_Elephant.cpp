#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
   

    int steps = 0;
    while (x > 0)
    {
        x = x - 5; // হাতি ৫ ঘরের একটি লাফ দিল
        steps++;   // একটি লাফ গোনা হলো
    }

    cout << steps << endl;
    return 0;
}
