// LeetCode 9: Palindrome Number
// Difficulty: Easy
// Approach: Reverse Half of Number
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == reversedHalf || x == reversedHalf / 10);
    }
};
