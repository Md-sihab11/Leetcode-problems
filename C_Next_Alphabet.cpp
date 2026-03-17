#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long 

int main()
{
    char n;
    cin>>n;

    char letter[26]={'a','b','c','d','e','f',
        'g','h','i','j','k','l','m','n','o',
        'p','q','r','s','t','u','v','w','x','y','z'};


        for(int i=0; i<26; i++)
        {
            if(letter[i]==n && letter[i]!='z')
            {
                cout<<letter[i+1]<<endl;
                break;
            }
            else if(letter[i]=='z')
            {
                cout<<letter[0]<<endl;
                break;
            }
        }
        
    return 0;
}