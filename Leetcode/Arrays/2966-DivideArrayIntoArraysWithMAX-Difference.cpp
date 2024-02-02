#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Divide the array into one or more arrays of size 3 satisfying the following conditions:

// Each element of nums should be in exactly one array.
// The difference between any two elements in one array is less than or equal to k.
// Return a 2D array containing all the arrays. If it is impossible to satisfy the conditions, return an empty array. And if there are multiple answers, return any of them.

    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> v;                                              // Make 2d array to store the 1d array of size 3   
        sort(nums.begin(), nums.end());                                 // Sort the given array                
        for (int i = 0; i + 2 < nums.size(); ++i) {                    // Iterate through the array
            if (i % 3 == 0) {                                         // Check index is multiple of 3 because we store the element in array at index =0,3,6                  
                if (nums[i + 2] - nums[i] <= k) {                    // Difference between 3rd and 2nd elements in the triplet is <= k             
                    v.push_back({nums[i], nums[i + 1], nums[i + 2]});           // If true, push 3 element together form i to i+2
                } else {
                    return {};                                          // If false, return an empty vector- no array is possible
                }
            }
        }
        return v;      
    }

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12};
    int k=3;
    vector<vector<int>> ans = divideArray(nums,k);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }
    return 0;
}