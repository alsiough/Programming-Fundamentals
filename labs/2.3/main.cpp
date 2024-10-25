/*
* Done by:
* Student Name: Serhiienko Oleksandr
* Student Group: 121
* Lab 2.33
 */
//калькулятор написати простіше ніж лабу 2.3, тому тут буде калькулятор ( ͡° ͜ʖ ͡°)
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

// Function to determine the precedence of the operators
int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    return 0; // for non-operators like parentheses or invalid characters
}

// Function to check if a given character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to convert an infix expression to postfix expression
string infixToPostfix(const string &expression) {
    stack<char> operators;  // Stack to hold operators
    string postfix;         // Resultant postfix expression

    for (char c : expression) {
        if (isdigit(c)) {
            // If the character is a digit, add it to the postfix expression
            postfix += c;
        } else if (c == '(') {
            // If the character is an opening parenthesis, push it to the stack
            operators.push(c);
        } else if (c == ')') {
            // If the character is a closing parenthesis, pop and add to postfix until '(' is found
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove the '(' from the stack
        } else if (isOperator(c)) {
            // If the character is an operator, handle precedence
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Pop all the remaining operators from the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

// Function to perform the arithmetic operation
int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                throw runtime_error("Division by zero");
            }
            return operand1 / operand2;
        default:
            throw runtime_error("Invalid operator");
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(const string &expression) {
    stack<int> operands;  // Stack to hold operands

    for (char c : expression) {
        if (isdigit(c)) {
            // Push digits directly to the stack
            operands.push(c - '0'); // Convert char to int
        } else if (isOperator(c)) {
            // Pop the top two operands and apply the operator
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(c, operand1, operand2);
            operands.push(result); // Push the result back onto the stack
        }
    }

    // The final result will be the only element left in the stack
    return operands.top();
}

int main() {
    try {
        string infixExpression;
        cout << "Enter a valid infix expression (without spaces): ";
        cin >> infixExpression;

        // Convert infix to postfix
        string postfixExpression = infixToPostfix(infixExpression);
        cout << "Postfix Expression: " << postfixExpression << endl;

        // Evaluate the postfix expression
        int result = evaluatePostfix(postfixExpression);
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
