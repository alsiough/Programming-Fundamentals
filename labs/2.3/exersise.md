# Task: Implement a Calculator using Stack in C++ (3 labs - 2.3, 2.4, 2.5)

## Objective:
You are tasked with creating a simple calculator that evaluates mathematical expressions in **infix notation** using a stack. The calculator should support basic arithmetic operations: addition, subtraction, multiplication, and division. The program should correctly handle operator precedence.

## Problem Description:
In infix notation, the operator is placed between the operands. For example, the expression `3 + 4` is in infix form. To evaluate this expression correctly, operator precedence need to be considered.

You will implement a C++ program that:
1. Reads an infix mathematical expression from the user.
2. Converts the infix expression to a **postfix expression** (Reverse Polish Notation).
3. Evaluates the postfix expression using a stack.
4. Outputs the result.

## Requirements:
1. Implement the following functions:
   - **`precedence(char c)`**: Determines the precedence of the operators (`+`, `-`, `*`, `/`).
   - **`infixToPostfix(const string &expression)`**: Converts an infix expression to a postfix expression.
   - **`performOperation(char operation, int operand1, int operand2)`**: Takes an operator and two operands, and returns the result of applying the operator.
   - **`evaluatePostfix(const string &expression)`**: Evaluates a postfix expression and returns the result.
   
2. Use the C++ Standard Template Library (STL) `stack` to:
   - Store operators during the conversion of infix to postfix.
   - Store operands during the evaluation of the postfix expression.
   
3. Your program should handle the following:
   - Correctly evaluate expressions with operator precedence.
   - Invalid input (e.g., invalid characters).
   - Division by zero.

## Example:
For the input expression:

```
3 + 4 * 2
```

**The output should be:**
```
11
```

## Guidelines:
- **Convert the infix expression to postfix**:
  - Use a stack to hold operators.
  - Maintain precedence order: `*` and `/` should be applied before `+` and `-`.
- **Evaluate the postfix expression** using a stack:
  - Push numbers onto the stack.
  - When you encounter an operator, pop two numbers from the stack, apply the operator, and push the result back onto the stack.
  - After processing all tokens, the result should be the only element left on the stack.