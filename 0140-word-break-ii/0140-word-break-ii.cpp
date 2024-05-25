class Solution 
{
public:
    vector<string> getWords(string& s, int in, unordered_set<string>& word, unordered_map<int, vector<string>>& memo) 
    {
        vector<string> res;
        // Base case
        int n = s.size();
        if (in == n) 
        {
            res.push_back("");
            return res;
        }
        if (memo.count(in))
            return memo[in];
        
        // Recurrence
        string temp = "";
        for (int i = in; i < n; i++) 
        {
            temp += s[i];
            if (word.count(temp)) 
            {
                vector<string> sub = getWords(s, i + 1, word, memo);
                for (auto& str : sub) 
                {
                    res.push_back(temp + (str.empty() ? "" : " " + str));
                }
            }
        }
        return memo[in] = res;
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<string> word(wordDict.begin(), wordDict.end());
        unordered_map<int, vector<string>> memo;
        return getWords(s, 0, word, memo);
    }
};
