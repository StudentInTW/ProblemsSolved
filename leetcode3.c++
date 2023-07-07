class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int alphabet[128] = {0};
        int count = 0, longest = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (alphabet[s[i]] == 0) {
                count++;
                alphabet[s[i]] = 1;
            longest= (longest>count?longest:count);
            } else {
                while (s[i - count] != s[i]) {
                    alphabet[s[i - count]] = 0;
                    count--;
                }
            }
        }
        
        return longest;
    }
};
