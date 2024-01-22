#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>>&matrix , int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element = matrix[rowIndex][colIndex];
        if(element==target){
            // cout<<"target found at "<<rowIndex<<" "<<colIndex;
            return 1;
        }else if(element>target){
            colIndex--;
        }else{
            rowIndex++;
        }
    }

    return 0;


}
    
int main()
{
    vector<vector<int>> matrix = {
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };

    // you'll see that when you convert it in 1d array it won't be sorted so we have to take different approach

    int target=9;

    int ans = binarySearch(matrix,target);

    if(ans){
        cout<<"target found";
    }else{
        cout<<"target not found";
    }
    
return 0;
}