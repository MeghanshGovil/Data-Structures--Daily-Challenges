/* Question-> Permutation in String*/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        vector<int> s1_freq(26, 0);
        vector<int> s2_freq(26, 0);
        
        for (char c : s1) {
            s1_freq[c - 'a']++;
        }
        
        for (int i = 0; i < s2.size(); i++) {
            s2_freq[s2[i] - 'a']++;
            if (i >= s1.size()) {
                s2_freq[s2[i - s1.size()] - 'a']--;
            }
            if (s1_freq == s2_freq) {
                return true;
            }
        }
        
        return false;
    }
};
