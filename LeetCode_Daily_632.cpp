// Question -> Smallest Range Covering Elements from K Lists
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        vector<int> next(k, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        int max_val = INT_MIN;
        for (int i = 0; i < k; i++) {
            pq.push({nums[i][0], i});
            max_val = max(max_val, nums[i][0]);
        }
        
        vector<int> result = {pq.top().first, max_val};
        int range = max_val - pq.top().first;
        
        while (true) {
            auto [min_val, list_index] = pq.top();
            pq.pop();
            
            next[list_index]++;
            if (next[list_index] == nums[list_index].size()) {
                break;
            }
            
            pq.push({nums[list_index][next[list_index]], list_index});
            max_val = max(max_val, nums[list_index][next[list_index]]);
            
            if (max_val - pq.top().first < range) {
                range = max_val - pq.top().first;
                result = {pq.top().first, max_val};
            }
        }
        
        return result;
    }
};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        vector<int> next(k, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        int max_val = INT_MIN;
        for (int i = 0; i < k; i++) {
            pq.push({nums[i][0], i});
            max_val = max(max_val, nums[i][0]);
        }
        
        vector<int> result = {pq.top().first, max_val};
        int range = max_val - pq.top().first;
        
        while (true) {
            auto [min_val, list_index] = pq.top();
            pq.pop();
            
            next[list_index]++;
            if (next[list_index] == nums[list_index].size()) {
                break;
            }
            
            pq.push({nums[list_index][next[list_index]], list_index});
            max_val = max(max_val, nums[list_index][next[list_index]]);
            
            if (max_val - pq.top().first < range) {
                range = max_val - pq.top().first;
                result = {pq.top().first, max_val};
            }
        }
        
        return result;
    }
};
