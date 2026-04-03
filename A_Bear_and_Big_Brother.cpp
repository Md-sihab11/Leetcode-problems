#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int i = 1;
   // int bob=0, limak=0;
    int count = 0;
   while (a <= b) {
        a = a * 3; // লিমাক প্রতি বছর ৩ গুণ হয়
        b = b * 2; // বব প্রতি বছর ২ গুণ হয়
        count++;   // এক বছর পার হলো
    }
    cout << count << endl;
}
