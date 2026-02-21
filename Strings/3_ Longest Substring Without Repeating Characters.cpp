// LeetCode 3: Longest Substring Without Repeating Characters
// Difficulty: Medium
// Approach: Sliding Window + Hashing
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256, -1); // ASCII map
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.length(); right++) {
            // If character seen before and inside window
            if (lastSeen[s[right]] >= left) {
                left = lastSeen[s[right]] + 1;
            }

            lastSeen[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
