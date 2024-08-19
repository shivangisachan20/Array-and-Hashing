class Solution {
public:
    vector<int> sameEndSubstringCount(string s, vector<vector<int>>& queries) {
        int n = s.length();
        vector<vector<int>> count(26, vector<int>(n + 1, 0));
        
        // Precompute count of each character up to each index
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                count[j][i + 1] = count[j][i];
            }
            count[s[i] - 'a'][i + 1]++;
        }
        
        vector<int> ans;
        for (const auto& query : queries) {
            int left = query[0], right = query[1];
            int sameEndCount = 0;
            
            // Count same-end substrings for each character
            for (int i = 0; i < 26; i++) {
                int charCount = count[i][right + 1] - count[i][left];
                sameEndCount += (charCount * (charCount + 1)) / 2;
            }
            
            ans.push_back(sameEndCount);
        }
        
        return ans;
    }
};