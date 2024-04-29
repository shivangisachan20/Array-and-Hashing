class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int value = k;
        for (auto& item : nums)
        {
            value ^= item;
        }

        int answer = 0;
        while (value > 0)
        {
            value&=(value-1);  // used for counting set bit in value
            answer++;
        }
            
        return answer;
    }
};