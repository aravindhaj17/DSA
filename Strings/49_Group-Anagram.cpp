// LeetCode 49: Group Anagrams
// Difficulty: Medium
// Approach: Hash Map + Character Frequency
// Time Complexity: O(n * L)
// Space Complexity: O(n * L)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string &s : strs) {
            // Frequency count for 26 lowercase letters
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }

            // Build unique key from frequency
            string key;
            for (int count : freq) {
                key += "#" + to_string(count);
            }

            mp[key].push_back(s);
        }

        // Collect grouped anagrams
        vector<vector<string>> result;
        for (auto &it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
