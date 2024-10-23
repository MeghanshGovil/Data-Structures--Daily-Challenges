/*
    Question -> Rank Transform of an Array
    Problem Link-> https://leetcode.com/problems/rank-transform-of-an-array/description/
*/
Answer ->

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>a = arr;
        sort(a.begin(), a.end());
        unordered_map<int, int> mp;
        int rank = 1;
        for (int i = 0; i < a.size(); i++) {
            if (i > 0 && a[i] != a[i - 1]) {
                rank++;
            }
            mp[a[i]] = rank;
        }
        for (auto &x : arr) {
            x = mp[x];
        }
        return arr;
    }
};
