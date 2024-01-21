#include<iostream>
using namespace std;

bool isPresent(int arr[][3],int target){
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           if(arr[i][j] == target){
            return 1;
           }
        }
    }
    return 0;
}
    
int main()
{
     int arr[2][3];

    //input
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<< "Enter Element at:-"<<i <<" "<<j<<": " ;
            cin >> arr[i][j];
        }
    }

    cout << "Enter the element you want to find"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target)){
        cout << target << " is present";
    }else{
        cout << target << " is not present";
    }

return 0;
}