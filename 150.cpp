#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"
#include "unordered_map"

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> num_stack;
        for (const auto &token: tokens) {
            if (token.size() > 1 || isdigit(token[0])) {
                num_stack.push(stoi(token));
                continue;
            }
            int num1 = num_stack.top();
            num_stack.pop();
            int num2 = num_stack.top();
            num_stack.pop();
            int val;
            if (token == "+")
                val = num2 + num1;
            else if (token == "-")
                val = num2 - num1;
            else if (token == "*")
                val = num2 * num1;
            else
                val = num2 / num1;
            num_stack.push(val);
        }
        return num_stack.top();
    }
};

int main() {
    vector<string> x{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << Solution().evalRPN(x);
    return 0;
}