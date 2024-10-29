/* Question -> Minimum Number of Swaps to Make the String Balanced */
class Solution {
public:
    int minSwaps(string s) {

        int unmatchedClosing = 0;
        int maxUnmatched = 0;
        for (char c : s) {
            if (c == '[') {
                unmatchedClosing--;
            } else {
                unmatchedClosing++;
            }
            maxUnmatched = max(maxUnmatched, unmatchedClosing);
        }
        return (maxUnmatched + 1) / 2;
    }
};
