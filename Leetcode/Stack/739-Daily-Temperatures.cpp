    #include<iostream>
    #include<vector>
    #include<stack>

    using namespace std;

    // Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

    vector<int> dailyTemperatures( vector<int>& temp) {
        vector<int> ans(temp.size(),0);
        stack <int> stack;  
        for(int i=temp.size()-1;i>=0;i--){
            if(stack.empty()){
                stack.push(i);
                ans[i] = 0;
            }
            else{

                while(!stack.empty() && temp[i]>=temp[stack.top()]){
                    stack.pop();
                }

                if(stack.empty()){
                    ans[i] = 0;
                }

                else{
                    ans[i] = stack.top()-i;
                }
                stack.push(i);
            }
            
        }
        return ans;
    } 

    int main(){
        vector<int> temp = {73,74,75,71,69,72,76,73};
        vector<int> ans = dailyTemperatures(temp);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    }