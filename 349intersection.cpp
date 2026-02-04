#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;

        for (int i = 0; i < nums2.size(); i++) {
            if (i > 0 && nums2[i] == nums2[i - 1]) 
                continue;

            if (binary_search(nums1.begin(), nums1.end(), nums2[i])) {
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> ans = sol.intersection(nums1, nums2);

    cout << "Intersection (Unique elements): ";
    for(int x : ans) cout << x << " "<<endl;
    cout << endl;

    return 0;
}
