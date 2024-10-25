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

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    return 0;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


string infixToPostfix(const string &expression) {
    stack<char> operators;
    string postfix;

    for (char c : expression) {
        if (isdigit(c)) {

            postfix += c;
        } else if (c == '(') {

            operators.push(c);
        } else if (c == ')') {

            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop();
        } else if (isOperator(c)) {

            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }


    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}


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

int evaluatePostfix(const string &expression) {
    stack<int> operands;

    for (char c : expression) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else if (isOperator(c)) {
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            int result = performOperation(c, operand1, operand2);
            operands.push(result);
        }
    }


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
