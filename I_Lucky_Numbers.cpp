
/*Bismillah hirrahmanirrohim*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
   int n;
   cin>>n;

   int div = n/10;
   int sec=n%10;

   if((sec !=0 && div%sec ==0) || (div !=0 && sec%div ==0))
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
    return 0;
}
