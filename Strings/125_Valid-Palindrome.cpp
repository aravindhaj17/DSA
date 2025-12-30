// LeetCode 125: Valid Palindrome
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left]))
                left++;
            while (left < right && !isalnum(s[right]))
                right--;

            // Compare characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
