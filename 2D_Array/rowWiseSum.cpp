#include<iostream>
using namespace std;
    
int main()
{
     int arr[2][3] = {{1,2,3},{4,5,6}};

    //input

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<< "Enter Element at:-"<<i <<" "<<j<<": " ;
    //         cin >> arr[i][j];
    //     }
    // }

    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
    }



    
return 0;
}