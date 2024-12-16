#include <iostream>
#include <stack>
#include <string>

bool is_balanced(const std::string& expression) {
    std::stack<char> s;

    for (char ch : expression) {
        // If the character is an opening bracket, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // If it's a closing bracket, check for matching opening bracket
        else if (ch == ')' || ch == '}' || ch == ']') {
            // If the stack is empty, there's no corresponding opening bracket
            if (s.empty()) {
                return false;
            }

            // Pop the top of the stack and check if it matches
            char top = s.top();
            s.pop();
            
            // Check if the popped element matches the corresponding opening bracket
            if ((ch == ')' && top != '(') || 
                (ch == '}' && top != '{') || 
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // If the stack is empty, the expression is balanced, otherwise it's not
    return s.empty();
}

int main() {
    // Test cases
    std::string expression;

    std::cout << "Enter an expression with parentheses: ";
    std::getline(std::cin, expression);

    if (is_balanced(expression)) {
        std::cout << "The parentheses are balanced.\n";
    } else {
        std::cout << "The parentheses are not balanced.\n";
    }

    return 0;
}
