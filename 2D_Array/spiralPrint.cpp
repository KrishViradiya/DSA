#include<iostream>
#include <vector>
using namespace std;
    
    vector<int> printSpiral(vector<vector<int>> arr, int row,int col){
        vector <int> ans;
        int count = 0;
        int total = row * col;

        // indexes initialization
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol = col-1;

        while(count < total){
        
        // printing starting row
        for(int i=startCol ; count < total && i<=endCol ;i++){
            // cout << arr[startRow][i]<< " ";
            ans.push_back(arr[startRow][i]);
            count ++;
        }
        startRow++;

        //printing ending col
        for(int i=startRow;  count < total && i<=endRow; i++){
            // cout << arr[i][endCol] << " ";
            ans.push_back(arr[i][endCol]);
            count ++;

        }
        endCol--;

        // printing ending row
        for(int i=endCol ; count < total && i>=startCol; i--){
            // cout << arr[endRow][i] << " ";
            ans.push_back(arr[endRow][i]);
            count ++;

        }
        endRow--;

        // printing start col
        for(int i=endRow; count < total && i>=startRow ; i--){
            // cout << arr[i][startCol] << " ";
            ans.push_back(arr[i][startCol]);
            count ++;

        }
         startCol++;
    }
        

        return ans;

}

int main()
{
    int row=3,col=3;
      vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
        // output: 1 2 3 6 9 8 7 4 5

     vector<int> answer = printSpiral(arr,row,col);
      for(int i = 0; i < answer.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        cout << answer[i] << " ";
    }
    
return 0;
}