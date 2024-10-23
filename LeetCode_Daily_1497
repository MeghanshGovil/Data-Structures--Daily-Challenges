/*
Question-> Check If Array Pairs Are Divisible by k
Problem Link -> https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/description/
*/
Answer-> 
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> count(k, 0);
        for (int num : arr) {
            count[(num % k + k) % k]++;
        }
        if (count[0] % 2 != 0) return false;
        for (int i = 1; i <= k / 2; i++) {
            if (count[i] != count[k - i]) return false;
        }
        return true;
    }
};
