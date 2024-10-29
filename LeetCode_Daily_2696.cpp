/* Question-> Minimum String Length After Removing Substrings */
class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        
        for(char c : s) {
            if(!st.empty()) {
                if((c == 'B' && st.top() == 'A') || 
                   (c == 'D' && st.top() == 'C')) {
                    st.pop();
                } else {
                    st.push(c);
                }
            } else {
                st.push(c);
            }
        }
        
        return st.size();
    }
};
