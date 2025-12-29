// LeetCode 20: Valid Parentheses
// Difficulty: Easy
// Data Structure: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        // Traverse each character in the string
        for (char ch : s) {

            // Push opening brackets onto stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // Handle closing brackets
            else {
                // If stack is empty, no matching opening bracket
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // Check for matching pair
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If stack is empty, parentheses are balanced
        return st.empty();
    }
};
