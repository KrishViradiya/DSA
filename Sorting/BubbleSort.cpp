#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i =0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}    

void BubbleSort(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        // for n-1 rounds as we know

        for(int j = 0 ; j<n-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    printArray(arr,n);
}    

int main()
{
     int arr[5] = {5,4,3,2,1};

     BubbleSort(arr,5);
    
return 0;
}