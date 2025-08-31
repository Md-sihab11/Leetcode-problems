#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        {
            return false;
        }
        long long rev = 0;
        int num = x;

        while(num!=0)
        {
            int A = num%10;
            rev = rev*10+A;
            num = num /10;
        }
        return (rev==x);

    }
};

int main()
{
    int x = 121;
   Solution sol;

    bool B = sol.isPalindrome(x);
   if(B) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}