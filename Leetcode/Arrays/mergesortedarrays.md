#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
}    

void merge(int arr1[], int n, int arr2[] , int m , int arr3[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    // copy karva do first array ko k me
    while(i<n){
        arr3[k++] = arr1[i++];
    }

    // copy karva do second array ko k me
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}    

int main()
{
     int arr1[5] = {1,3,5,7,9};
     int arr2[3] = {2,4,6};

     int arr3[8] = {0};

     merge(arr1,5,arr2,3,arr3);

     printArray(arr3,8);
    
return 0;
}