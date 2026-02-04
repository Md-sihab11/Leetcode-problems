#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {

        int maxWater =0 ;

        int lp=0, rp=height.size()-1 ;

        while(lp < rp)
        {
            int Wd= rp - lp;
            int ht = min(height[lp], height[rp]);

            int currwater = Wd * ht;
           maxWater = max(maxWater, currwater);
           height[lp] < height [rp] ? lp++ : rp--;

        }

         return maxWater;
    }
};
    
   

int main()
{
   vector<int>height= {1,8,6,2,5,4,8,3,7};
   Solution ob;
    int mp = ob.maxArea(height);

    cout<<"Max water "<<mp<<endl;
}