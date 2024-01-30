#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;

        for (const string& token : tokens) {
            if (token.size() > 1 || isdigit(token[0])) {
                numbers.push(stoi(token));
            } else {
                int operand2 = numbers.top();
                numbers.pop();

                int operand1 = numbers.top();
                numbers.pop();

                switch (token[0]) {
                    case '+': 
                        numbers.push(operand1 + operand2);
                        break;
                    case '-': 
                        numbers.push(operand1 - operand2);
                        break;
                    case '*': 
                        numbers.push(operand1 * operand2);
                        break;
                    case '/': 
                        numbers.push(operand1 / operand2);
                        break;
                }                
            }
        }
        cout << numbers.top() << endl;
        return numbers.top();
    }

int main(){

    vector<string> tokens = {"2","1","+","3","*"};
    
    int result = evalRPN(tokens);
    cout << result << endl;

    return 0;
}