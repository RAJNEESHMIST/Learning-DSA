#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfixExpression(string postfix) {
    stack<int> operandStack;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            operandStack.push(ch - '0'); // Convert character to integer
        } else if (ch == ' ' || ch == '\t') {
            continue; // Skip whitespace
        } else {
            // It's an operator
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            switch (ch) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    cerr << "Invalid operator: " << ch << endl;
                    return 0; // Handle error
            }

            operandStack.push(result);
        }
    }

    return operandStack.top();
}

int main() {
    string postfixExpression = "23*5+";
    int result = evaluatePostfixExpression(postfixExpression);
    cout << "Result: " << result << endl;
    return 0;
}
