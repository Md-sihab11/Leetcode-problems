#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> ans;

        for(int x : nums1) {
            map[x]++;
        }

        for(int x : nums2) {
            if(map[x] > 0) {
                ans.push_back(x);
                map[x]--; 
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> ans = sol.intersect(nums1, nums2);

    cout << "Intersection (With duplicates): ";
    for(int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
