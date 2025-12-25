// LeetCode 56: Merge Intervals
// Difficulty: Medium
// Approach: Sorting + Greedy Merge
// Time Complexity: O(n log n)
// Space Complexity: O(1) extra (output excluded)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Step 1: Sort by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        merged.push_back(intervals[0]);

        // Step 2: Merge overlapping intervals
        for (int i = 1; i < intervals.size(); i++) {
            // If overlap
            if (intervals[i][0] <= merged.back()[1]) {
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            } 
            // No overlap
            else {
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};
