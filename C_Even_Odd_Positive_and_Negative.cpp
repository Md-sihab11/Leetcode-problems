#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;


    //Question e ja deya ase ta likher try korbi
    
    int count =0,pos=0,neg=0,odd=0;
    for(int i=1; i<=N; i++)
    {
        int n;
        cin>>n; 

        if(n%2==0){

            count++;
            
        }
         else{
            odd++;
        }

         if(n>0)
        {
            pos++;
        }
        else if(n<0){
            neg++;
        }
       
    }
   
    cout<<"Even: "<<count<<'\n';
    cout<<"Odd: "<<odd<<'\n';
    cout<<"Positive: "<<pos<<'\n';
    cout<<"Negative: "<<neg<<'\n';

}