#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSumZero(vector<int>& arr) {
    unordered_map<int, int> mp; // to store prefix sum index
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if (prefixSum == 0)
            maxLen = i + 1;
        else if (mp.find(prefixSum) != mp.end())
            maxLen = max(maxLen, i - mp[prefixSum]);
        else
            mp[prefixSum] = i;
    }

    return maxLen;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    int R = largestSubarrayWithSumZero(arr);
    cout << R << endl;

    return 0;
}
