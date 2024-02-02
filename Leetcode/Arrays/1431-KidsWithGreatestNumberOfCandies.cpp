#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

// Note that multiple kids can have the greatest number of candies.
   
   
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int max= INT_MIN;
    vector <bool>ans;
    for(int i=0;i<candies.size();i++)
        if(max<=candies[i]) max=candies[i];
    for(int i=0;i<candies.size();i++){
        candies[i]=candies[i] +extraCandies;
    
        if(max<=candies[i])
            ans.push_back(true);
        else
            ans.push_back(false);
    }
    return ans;
}
int main(){

    vector<int> candies = {2,3,5,1,3};
    
    int extraCandies=3;
    
    vector<bool> ans = kidsWithCandies(candies,extraCandies);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    for (auto i : ans) 
        if(i==1)
            cout<<"true ";
        else
            cout<<"false ";
    return 0;
}
