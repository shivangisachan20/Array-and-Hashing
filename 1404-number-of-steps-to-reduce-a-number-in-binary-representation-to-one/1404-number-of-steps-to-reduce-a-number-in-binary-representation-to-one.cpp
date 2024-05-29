class Solution {
public:
    int numSteps(string s) {
        int carry = 0;
        int op = 0;
        int n = s.length();
        for (int i = n - 1; i >= 1; i--) {
            if (((s[i] - '0') + carry) % 2 == 1) {  // for odd 2 operation, first for converting all 1's to 0 till we get the first 0
                op += 2;
                carry = 1; // and make it 1
            } else {
                op++;
            }
        }
        return op + carry;
    }
};
