class Solution {
public:
    int reverse(int x) {
        int answer = 0;

        while (x != 0) {
            // 確保答案在下次乘以10之前不會溢出
            if (answer > 2147483647 / 10 || (answer == 214748364 && x % 10 > 7)) {
                return 0;
            } else if (answer < -2147483648 / 10 || (answer == -214748364 && x % 10 < -8)) {
                return 0;
            }

            answer = answer * 10 + x % 10;
            x /= 10;
        }

        return answer;
    }
};
