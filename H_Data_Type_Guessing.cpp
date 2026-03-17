#include <iostream>

using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    // Use long long for the product to prevent overflow
    long long product = n * k;

    if (product % a != 0) {
        cout << "double" << endl; //1.4
    } else {
        long long result = product / a;
        
        // Check if the result fits in a 32-bit signed integer
        if (result <= 2147483647) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }

    return 0;
}