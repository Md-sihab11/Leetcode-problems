// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            swap(arr[i][j], arr[i][m-j-1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//reverse column left to right 
// for(int i=0;i<n;i++){
//     for(int j=0;j<n/2;j++){
//         swap(arr[i][j], arr[i][n-j-1]);
//     }
// }

//reverse row top to bottom
    // for(int i = 0; i < n/2; i++){
    //     for(int j = 0; j < n; j++){
    //         swap(arr[i][j], arr[n-i-1][j]);
    //     }
    // }

    //transpose 
//     for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         swap(arr[i][j], arr[j][i]);
//     }
// }