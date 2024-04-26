class Solution {
public:
    int longestIdealString(string s, int k) 
    
{
        int dp[150] = {}, res = 0;
        for (auto& i : s) {
            for (int j = i - k; j <= i + k; ++j)
            {
               dp[i] = max(dp[i], dp[j]);
            
            }
            dp[i]=dp[i]+1;
             res = max(res, dp[i]);    
        }
        return res;
    }
};