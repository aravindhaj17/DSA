// LeetCode 344: Reverse String
// Difficulty: Easy
// Topic: Array / Two Pointers
// Approach: Two Pointers (In-place)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
