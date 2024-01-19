#include <iostream>

using namespace std;

int main(){
    
    int arr2[2][2] = {1,2,3,4};       //logic // Column * i + j;

    // 2D array input
    // for (int i = 0; i < 2; i++)
    // {
    //     for(int j=0;j<2;j++){
    //         cin>>arr2[i][j];
    //     }
    // }

    //print 2d array
    // for (int i = 0; i < 2; i++)
    // {
    //     for(int j=0;j<2;j++){
    //         cout << arr2[i][j];
    //     }
    // }


   // print column wise
    for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<2;j++){
            cout<<arr2[j][i]<<" ";
        }
        cout<<endl;
    }
    
    //print row wise
     for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


     
    


}