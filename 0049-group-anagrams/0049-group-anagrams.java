class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
      vector<vector<string>>ans;
        unordered_map<string,vector<string>>group;
        for(auto s:strs)
        {
            string a=s;
            sort(a.begin(),a.end());
            group[a].push_back(s);
            
        }
        for(auto s:group)
            ans.push_back(s.second);
        return ans;
    }
};