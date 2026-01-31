// LeetCode 347: Top K Frequent Elements
// Difficulty: Medium
// Approach: Hash Map + Bucket Sort
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Step 1: Count frequency of each element
        for (int num : nums)
            freq[num]++;

        // Step 2: Create buckets where index = frequency
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto &it : freq) {
            buckets[it.second].push_back(it.first);
        }

        // Step 3: Collect top k frequent elements
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }

        return result;
    }
};
