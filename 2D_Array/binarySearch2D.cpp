#include<iostream>
#include<vector>
using namespace std;
    
bool isPresent(vector<vector<int>>&arr,int target){
    int row=arr.size();
    int col=arr[0].size();

    int start=0;
    int end = row*col;

    int mid= start + (end-start)/2;

    while(start<=end){
        int element = arr[mid/col][mid%col];
        if(element==target){
            return 1;
        }else if(element > target){
            end = mid-1;
        }else{
            start=start+1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
} 

int main()
{
     
   vector<vector <int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
   // consider it as [1,2,3,4,5,6,7,8,9] so it willlooklike a linear sorted array and the startind index will be zero and the ending index will be 8 which is eqaul to row*col-1, and the mid element will be start+mid/2; but its 2D so,we will require something special which will be [mid/col][mid%col] this will find mid elementfor 2D
    int target=9;
   if(isPresent(arr,target)){
    cout << " target is present" ;
   }else{
    cout<<"target is not present";
   }

return 0;
}