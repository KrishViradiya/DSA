#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0 ; i<n;i++){
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[] , int n){

    for(int i=0 ; i<n-1; i++){
        // assuming first element as the minimum of all elements
        int minIndex = i;

        // now to find if there is another element smaller than our minIndex
        for(int j = i+1; j<n ; j++){
            // if element found then make it as minIndex and swap it with i
            if( arr[j] < arr[minIndex])
             minIndex = j;
        }
        // c++ swap function , swapping minIndex and i
        swap(arr[minIndex] , arr[i]);
    }
    // printing sorted array
    printArray(arr , n);

    // as we are running two for loops for almost n times, time complexity will be O(n*n).
}
    
int main()
{
     int arr[5] = {4,3,2,1,5};

     selectionSort(arr,5);
    
return 0;
}