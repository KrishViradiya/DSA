#include<iostream>
#include <stdio.h> 
using namespace std;
    
int main()
{
    int arr[2][2] = {1,2,3,4};

    for(int col=0;col<2;col++){
        if(col & 1){
            // print down to up
            for(int row=1; row>=0; row--){
                cout << arr[row][col] << " ";
            }
        } else{
            //print up to down
            for(int row=0;row<2;row++){
                cout << arr[row][col] << " ";
            }
        }

    }
    
return 0;
}