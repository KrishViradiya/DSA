#include<iostream>
using namespace std;
    
int firstOccurence(int arr[] , int size , int k){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid -1;          
        }

        mid = s + (e-s)/2;
        
    }
    return ans;
}   

int lastOccurence(int arr[] , int size , int k){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(k > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid -1;          
        }

        mid = s + (e-s)/2;
        
    }
    return ans;
}    



int main()
{
     int arr[5] ={ 1,2,3,3,3};

     int first = firstOccurence(arr,5,3);
     int last = lastOccurence(arr,5,3);

     cout << "First occurence of 3 is at index : " << first <<endl;
     cout << "Last occurence of 3 is at index : " << last <<endl;

    int totalOccurence = (last - first) + 1;
    cout << "Total Occurence of 3 is : " << totalOccurence << " times" << endl;

    return 0;
}