#include<iostream>

using namespace std;

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[] , int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(j; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 

    printArray(arr,n);
}
    
int main()
{
     int arr[5] = {5,4,3,2,1};
     int n = 5;
     insertionSort(arr,n);
    
     return 0;
}