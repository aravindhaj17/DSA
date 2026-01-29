// LeetCode 42: Trapping Rain Water
// Difficulty: Hard
// Approach: Two Pointers (Optimal)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        // Edge case: if there are less than 3 bars, no water can be trapped
        if (n < 3) return 0;

        // Two pointers
        int left = 0;
        int right = n - 1;

        // Maximum height seen so far from left and right
        int maxLeft = 0;
        int maxRight = 0;

        // Stores total trapped water
        int totalWater = 0;

        // Process bars until pointers meet
        while (left <= right) {

            // If left height is smaller, it becomes the limiting factor
            if (height[left] <= height[right]) {

                // Update maxLeft if current bar is taller
                if (height[left] >= maxLeft) {
                    maxLeft = height[left];
                } 
                // Otherwise, water can be trapped
                else {
                    totalWater += maxLeft - height[left];
                }

                // Move left pointer
                left++;
            }
            // Right side is the limiting factor
            else {

                // Update maxRight if current bar is taller
                if (height[right] >= maxRight) {
                    maxRight = height[right];
                } 
                // Otherwise, water can be trapped
                else {
                    totalWater += maxRight - height[right];
                }

                // Move right pointer
                right--;
            }
        }

        // Return total trapped rainwater
        return totalWater;
    }
};
