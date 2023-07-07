#include <vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string odd = oddAns(s);
        string even = evenAns(s);

        return (odd.length() > even.length()) ? odd : even;
    }

    string oddAns(string s) {
        string answer;
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            int left = i, right = i;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            int currLength = right - left - 1;
            if (currLength > maxLength) {
                maxLength = currLength;
                answer = s.substr(left + 1, maxLength);
            }
        }

        return answer;
    }

    string evenAns(string s) {
        string answer;
        int maxLength = 0;

        for (int i = 0; i < s.length() - 1; i++) {
            int left = i, right = i + 1;
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            int currLength = right - left - 1;
            if (currLength > maxLength) {
                maxLength = currLength;
                answer = s.substr(left + 1, maxLength);
            }
        }

        return answer;
    }
};
