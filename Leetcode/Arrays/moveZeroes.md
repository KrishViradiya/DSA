#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
}    

void moveZeroes(int arr[] , int n){
        int i=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]!=0){
                swap(arr[j] , arr[i]);
                i++;
            }
        }
         printArray(arr,n);
}    

int main()
{
     int arr[5] = {0,2,0,1,0};
      moveZeroes(arr , 5);
    
return 0;
}
