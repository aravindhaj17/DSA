// LeetCode 217: Contains Duplicate
// Difficulty: Easy
// Approach: Hash Set
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
};
