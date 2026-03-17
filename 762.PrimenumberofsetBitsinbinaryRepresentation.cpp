#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>

class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left; i<=right; i++)
        {
            int x=__builtin_popcount(i);
            if(x==2 ||x==3 ||x==5 ||x==7 ||x==11 ||x==13 ||x==17 ||x==19 ) ans++;
        }
        return ans;
    }
};
//time: O(n)
//Space: O(1)
int main()
{
    int left,right;
    cin>>left>>right;
    Solution ob;
    int Ans = ob.countPrimeSetBits(left,right);
    cout<<Ans<<endl;
}