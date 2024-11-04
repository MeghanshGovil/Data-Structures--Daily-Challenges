// Question -> Maximal Score After Applying K Operations
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long score = 0;
        for (int i = 0; i < k; ++i) {
            int max_elem = pq.top();
            pq.pop();
            score += max_elem;
            int new_value = (max_elem + 2) / 3;
            pq.push(new_value);
        }
        
        return score;
    }
};
