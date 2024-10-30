/* Question -> The Number of the Smallest Unoccupied Chair */
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {

        vector<array<int, 3>> events;
        for (int i = 0; i < times.size(); i++) {

            events.push_back({times[i][0], 1, i});

            events.push_back({times[i][1], 0, i});
        }
        sort(events.begin(), events.end());

        priority_queue<int, vector<int>, greater<int>> availableChairs;

        for (int i = 0; i < times.size(); i++) {
            availableChairs.push(i);
        }

        unordered_map<int, int> friendToChair;

        for (const auto& event : events) {
            int time = event[0];
            bool isArrival = event[1];
            int friendIndex = event[2];

            if (isArrival) {

                int chair = availableChairs.top();
                availableChairs.pop();
                friendToChair[friendIndex] = chair;

                if (friendIndex == targetFriend) {
                    return chair;
                }
            } else {

                int chair = friendToChair[friendIndex];
                availableChairs.push(chair);
            }
        }

        return -1;
    }
};
