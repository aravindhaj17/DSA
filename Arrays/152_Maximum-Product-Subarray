// LeetCode 152: Maximum Product Subarray
// Difficulty: Medium
// Approach: Dynamic Programming (Tracking Max & Min Product)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Edge case: single element
        int result = nums[0];

        // maxProd = maximum product ending at current index
        // minProd = minimum product ending at current index
        int maxProd = nums[0];
        int minProd = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            // If current element is negative, swap max & min
            if (curr < 0)
                swap(maxProd, minProd);

            // Update max and min product
            maxProd = max(curr, maxProd * curr);
            minProd = min(curr, minProd * curr);

            // Update global maximum
            result = max(result, maxProd);
        }

        return result;
    }
};
